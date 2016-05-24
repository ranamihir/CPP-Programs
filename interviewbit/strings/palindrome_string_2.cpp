#include <iostream>
#include <string>
using namespace std;
int isPalindrome(string);
int main() {
	string s;
	getline(cin, s);
	cout << isPalindrome(s) << endl;
}
int isPalindrome(string s) {
    int i = 0, j = (int)s.size() - 1;
    while(i < j) {
        while(i < j && !isalnum(s[i]))
			i++;
        while(i < j && !isalnum(s[j]))
			j--;
        if (toupper(s[i]) != toupper(s[j]))
			return false; 
        i++;
        j--;
    }
    return true;
}
