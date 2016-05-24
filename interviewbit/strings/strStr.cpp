#include <iostream>
using namespace std;
int strStr(const string &, const string &);
int main() {
	string a, b;
	cin >> a >> b;
	cout << strStr(a, b);
}
int strStr(const string &haystack, const string &needle) {
	int n = haystack.length(), m = needle.length(), i, j;
	if (!n || !m)
		return -1;
	if (haystack == needle)
		return 0;
	for(i = 0; i < n; i++) {
		if (haystack[i] == needle[0]) {
			for(j = 1; j < m && i+j < n; j++) {
				if (haystack[i+j] != needle[j])
					break;
				else if (j == m-1)
					return i;
			}
		}
	}
	return -1;
}
