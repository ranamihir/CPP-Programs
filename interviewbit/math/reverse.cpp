#include <iostream>
#include <cmath>
using namespace std;
int reverse(int);
int main() {
	int n;
	cin >> n;
	cout << reverse(n) << endl;
}
int reverse(int n) {
	int m = abs(n);
	long s = 0;
	while (m > 0) {
		s = 10*s + m % 10;
        m /= 10;
	}
	if (s > INT_MAX)
		return 0;
	if (n < 0)
		return -s;
	return s;
}
