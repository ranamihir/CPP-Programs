#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int atoi(const string &);
int main() {
	string s;
	getline(cin, s);
	cout << atoi(s) << endl;
}
int atoi(const string &s) {
	int i = 0, n = s.length();
	long long number = 0;
	bool isNegative = false;
	while (!isdigit(s[i])) {
		if (s[i] != ' ' && !((s[i] == '-' || s[i] == '+') && isalnum(s[i+1])) && i < n)
			return 0;
		i++;
	}
	if (s[i-1] == '-' && i > 0)
		isNegative = true;
	while (i < n) {
		if (isdigit(s[i]))
			number = 10*number + (long)(s[i] - '0');
		else
			break;
		i++;
	}
	if (isNegative)
			number = -number;
	if (abs(number) <= INT_MAX)
		return number;
	else
		return isNegative == 0 ? INT_MAX : INT_MIN;
}
