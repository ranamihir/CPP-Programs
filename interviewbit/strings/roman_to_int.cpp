#include <iostream>
#include <map>
using namespace std;
int romanToInt(string);
int main() {
	string s;
	cin >> s;
	cout << romanToInt(s) << endl;
}
int romanToInt(string s) {
	int i, n = s.length(), sum = 0;
	map <char, int> m;
	m.insert(pair <char, int> ('I', 1);
	m.insert(pair <char, int> ('V', 5));
	m.insert(pair <char, int> ('X', 10));
	m.insert(pair <char, int> ('L', 50));
	m.insert(pair <char, int> ('C', 100));
	m.insert(pair <char, int> ('D', 500));
	m.insert(pair <char, int> ('M', 1000));
	for(i = 0; i < n; i++) {
		if (i < n-1) {
			if (m[s[i]] >= m[s[i+1]])
				sum += m[s[i]];
			else {
				sum += m[s[i+1]] - m[s[i]];
				i++;
			}
		}
		else
			sum += m[s[i]];
	}
	return sum;
}
