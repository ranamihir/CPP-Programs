#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string longestCommonPrefix(vector <string> &);
int main() {
	int n, i;
	cin >> n;
	vector <string> a;
	a.resize(n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cout << longestCommonPrefix(a);
}
string longestCommonPrefix(vector <string> &a) {
	int i, n = a.size(), j = 0, min_size = a[0].length();
	string s = "";
	vector <char> b;
	b.resize(n);
	for(i = 1; i < n; i++)
		min_size = min(min_size, (int)a[i].length());
	while (j <= min_size-1) {
		for(i = 0; i < n; i++)
			b[i] = a[i][j];
		sort(b.begin(), b.end());
		if (b[0] == b[n-1])
			s += b[0];
		i++;
		j++;
	}
	return s;
}
