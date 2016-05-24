#include <iostream>
using namespace std;
string longestPalindrome(string);
int main() {
	string s;
	cin >> s;
	cout << longestPalindrome(s) << endl;
}
string longestPalindrome(string s) {
    int len = s.length(), maxLength = 1, start = 0, low, high, i;
    // One by one consider every character as center point of 
    // even and odd length palindromes
    for (i = 1; i < len; i++) {
        // Find the longest even length palindrome with center points
        // as i-1 and i.  
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && s[low] == s[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }
        // Find the longest odd length palindrome with center 
        // point as i
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && s[low] == s[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            low--;
            high++;
        }
    }
    return s.substr(start, maxLength);
}
