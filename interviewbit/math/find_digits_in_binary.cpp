#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
string findDigitsInBinary(int);
int main() {
	int n;
	cin >> n;
	cout << findDigitsInBinary(n) << endl;
}
string findDigitsInBinary(int n) {
	if (!n)
		return "0";
	string result = "";
	stringstream ss;
	int rem;
	while (n >= 1) {
		rem = n % 2;
		n = (n - rem)/2;
		ss.str(string());
		ss << rem;
		result += ss.str();
	}
	reverse(result.begin(), result.end());
	return result;
}
