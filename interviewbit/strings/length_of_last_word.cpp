#include <iostream>
#include <string>
using namespace std;
int lengthOfLastWord(const string &);
int main() {
	string s;
	getline(cin, s);
	cout << lengthOfLastWord(s) << endl;
}
int lengthOfLastWord(const string &s) {
	int j = s.length() - 1;
	string result = "";
	while(s[j] == ' ' && j >= 0) {
		j--;
	}
	while(s[j] != ' ' && j >= 0) {
		result += s[j];
		j--;
	}
	return result.length();
}
