#include <iostream>
#include <string>
using namespace std;
bool checkChar(char);
int isPalindrome(string);
int main() {
	string s;
	getline(cin, s);
	cout << isPalindrome(s) << endl;
}
bool checkChar(char c) {
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
		return true;
	return false;
}
int isPalindrome(string s) {
	int n = s.length(), i, j = n-1;
	for(i = 0; i < n; i++)
		s[i] = tolower(s[i]);
	for(i = 0; i < j; i++, j--) {
		if (s[i] != s[j]) {
			if (checkChar(s[i]) && checkChar(s[j])) {
				return false;
			}
			else {
				if (!checkChar(s[i]))
					j++;
				else if (!checkChar(s[j]))
					i--;
			}
		}
	}
	return true;
}
