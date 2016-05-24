#include <iostream>
using namespace std;
void reverseWords(string &);
int main() {
	string s;
	getline(cin, s);
	reverseWords(s);
	cout << s << endl;
}
void reverseWords(string &s) {
	int n = s.length();
	if (n <= 1)
		return;
	int start = n-1, end = n-1;
	string result = "";
	while (end > 0) {
		while(s[end] == ' ' && end > 0)
			end--;
		start = end;
		while(s[start] != ' ' && start > 0)
			start--;
		if (!start && s[start] != ' ')
			result += s.substr(start, end-start+1);
		else
			result += s.substr(start+1, end-start) + " ";
		end = start;
	}
	int i = result.length() - 1;
	while(result[i] == ' ')
		i--;
	s = result.substr(0, i+1);
}
