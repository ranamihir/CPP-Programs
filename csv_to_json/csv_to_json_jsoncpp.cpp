#include <iterator>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include "dist/json/json.h"
#include "dist/json/json-forwards.h"
#include "dist/jsoncpp.cpp"
#include <fstream>
using namespace std;
/*
treelevel = data[0]
nodeid = data[1]
parentnodeid = data[2]
isleaf = data[3]
splitvarid = data[4]
splitval = data[5]
childnodeleft = data[6]
childnoderight = data[7]
nodesize = data[8]
predictclass = data[9]
predictclassprob = data[10]
*/
class CSVRow {
    public:
        string const& operator[](size_t index) const {
            return m_data[index];
        }
        size_t size() const {
            return m_data.size();
        }
        void readNextRow(istream& str) {
            string line;
            getline(str, line);
            stringstream lineStream(line);
            string cell;
            m_data.clear();
            while(getline(lineStream, cell, ',')) {
                m_data.push_back(cell);
            }
        }
    private:
        vector<string> m_data;
};
istream& operator>>(istream&, CSVRow&);
void csv_to_vector(ifstream &);
Json::Value vector_to_json(vector <vector <double> >, double, int);
int main() {
    ifstream file("-DecisionTreeMN-.csv");
    csv_to_vector(file);
}
istream& operator>>(istream& str, CSVRow& data) {
    data.readNextRow(str);
    return str;
}
void csv_to_vector(ifstream &file) {
    stringstream ss;
    double input;
    CSVRow row;
	file >> row;
	int n = row.size(), i;
    vector<vector <double> > data (n-1);
    while(file >> row) {
		i = 1;
		while(i < n) {
			if(row[i] == "") {
				data[i-1].push_back(-1);
				i++;
				continue;
			}
			ss << row[i];
			ss >> input;
			data[i-1].push_back(input);
			ss.clear();
			i++;
		}
    }
    for(int i = 0; i < data.size(); i++) {
    	for(int j = 0; j < data[i].size(); j++){
    		cout << setw(8) << data[i][j] << " | ";
		}
		cout << endl;
	}
	int maxDepth = data[0][data[0].size()-2];
	Json::Value root = vector_to_json(data, 1, maxDepth);
	cout << root;
	ofstream outfile;
	outfile.open("json.txt");
	Json::FastWriter fastWriter;
	string output = fastWriter.write(root);
	outfile << output;
	outfile.close();
}
Json::Value vector_to_json(vector <vector <double> > data, double id, int maxDepth) {
    Json::Value event;
    event["size_"] = (int)data[8][id-1];
    event["id_"] = (int)id;
    event["nodeType_"] = (data[3][id-1] == 0 ? "CLASSIFICATION_NODE" : "CLASSIFICATION_LEAF");
    if(event["nodeType_"] == "CLASSIFICATION_NODE"){
        event["split_"]["splitValue_"] = (int)data[5][id-1];
        event["split_"]["attr_"] = "attr";
        event["split_"]["score_"] = 0;
        event["split_"]["type_"] = "CLASSIFICATION_NUMERIC_SPLIT";
        event["split_"]["leftNodeSize_"] = (int)data[8][data[6][id-1]-1];
        event["split_"]["rightNodeSize_"] = (int)data[8][data[7][id-1]-1];
        event["leftChild_"] = vector_to_json(data, data[6][id-1], maxDepth);
        event["rightChild_"] = vector_to_json(data, data[7][id-1], maxDepth);
        event["maxDepth_"] = maxDepth + 1 - data[0][id-1];
    }
    else{
        event["label_"] = data[9][id-1];
        event["maxDepth_"] = 0;
    }
	return event;
}
