#include <iostream>
#include <vector>
using namespace std;
string convert(string, int);
int main() {
	string s;
	getline(cin, s);
	int n;
	cin >> n;
	cout << convert(s, n) << endl;
}
string convert(string s, int n) {
	if (n == 1)
		return s;
	string result = "";
	vector <vector <char> > temp;
	temp.resize(n);
	int row = 0, i, j, dir = 1;
	for(i = 0; i < s.length(); i++) {
		temp[row].push_back(s[i]);
		if (row == n-1)
			dir = -1;
		else if (row == 0)
			dir = 1;
		row += dir;
	}
	for(i = 0; i < temp.size(); i++) {
		for (j = 0; j < temp[i].size(); j++) {
			result += temp[i][j];
		}
	}
	return result;
}
