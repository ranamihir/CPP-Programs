#include <iterator>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <stack>
using namespace std;
/*
datasetid = data[0]
treelevel = data[1]
nodeid = data[2]
parentnodeid = data[3]
isleaf = data[4]
splitvarid = data[5]
splitval = data[6]
childnodeleft = data[7]
childnoderight = data[8]
nodesize = data[9]
predictclass = data[10]
predictclassprob = data[11]
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
string make_node(vector <vector <double> >, int, vector<string>);
string vector_to_json(vector <vector <double> >);
int main() {
    ifstream file("randomForest.csv");
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
	int n = row.size(), i, j;
    vector<vector <double> > data (n-1);
    string tree = "";
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
	vector<string> randomforest;
	int prev = 0, curr = 0, tree_num = 1, m = data[0].size();
	while(curr < m) {
		if(tree_num != data[0][curr] || curr == m-1) {
			if(curr == m-1)
				curr++;
			vector<vector<double> > tree_vector;
			for(int i = 1; i < 12; i++) {
				vector<double> temp(data[i].begin()+prev, data[i].begin()+curr);
				tree_vector.push_back(temp);
			}
			string json = vector_to_json(tree_vector);
			tree += json + (string)"\n";
			cout << json << endl;
			randomforest.push_back(json);
			tree_num++;
			prev = curr;
		}
		else if(tree_num == data[0][curr])
			curr++;
	}
	ofstream outfile;
	outfile.open("json_random_forest_iterative.txt");
	outfile << tree;
	outfile.close();
}
string make_node(vector <vector <double> > data, int id, vector<string> partial_tree) {
	int maxDepth = data[0][data[0].size()-2];
    string json = "";
    stringstream ss;
    json = (string)"{\"size_\": ";
	ss << (int)data[8][id-1];
	json += ss.str() + (string)",\"id_\": ";
	ss.str(string());
	ss << (int)id;
	json += ss.str() + (string)",\"nodeType_\": " + (string)(data[3][id-1] == 0 ? "\"CLASSIFICATION_NODE\"" : "\"CLASSIFICATION_LEAF\"");
	ss.str(string());
	if((data[3][id-1] == 0 ? "CLASSIFICATION_NODE" : "CLASSIFICATION_LEAF") == "CLASSIFICATION_NODE") {
		ss << (int)data[5][id-1];
		json += (string)",\"split_\": {\"splitValue_\": " + ss.str() + (string)",\"attr_\": \"attr\", \"score_\": 0, \"type_\": \"CLASSIFICATION_NUMERIC_SPLIT\", \"leftNodeSize_\": ";
		ss.str(string());
		ss << (int)data[8][data[6][id-1]-1];
		json += ss.str() + (string)",\"rightNodeSize_\": ";
		ss.str(string());
		ss << (int)data[8][data[7][id-1]-1];
		json += ss.str() + "},\"leftChild_\": "+ partial_tree[data, data[6][id-1]] + ",\"rightChild_\": " + partial_tree[data, data[7][id-1]] + (string)",\"maxDepth_\": ";
		ss.str(string());
		ss << maxDepth + 1 - data[0][id-1];
		json += ss.str();
		ss.str(string());
	}
	else {
		ss << data[9][id-1];
		json += (string)",\"label_\": " + ss.str() + (string)",\"maxDepth_\": 0";
		ss.str(string());
	}
	json += (string)"}";
	return json;
}
string vector_to_json(vector <vector <double> > data) {
	vector<string> partial_tree (data[0].size()+1);
	stack<int> s;
	string t = "";
	s.push(1);
	int prev = 0;
	while (!s.empty()) {
		int curr = s.top();
	    if (!prev || data[6][prev-1] == curr || data[7][prev-1] == curr) {
			if (data[6][curr-1] != -1)
				s.push(data[6][curr-1]);
			else if (data[7][curr-1] != -1)
				s.push(data[7][curr-1]);
			}
			else if (data[6][curr-1] == prev) {
				if (data[7][curr-1])
					s.push(data[7][curr-1]);
				}
			else {
				t = make_node(data, curr, partial_tree);
				partial_tree[curr] = t;
				s.pop();
			}
		prev = curr;
	}
	return partial_tree[1];
}
