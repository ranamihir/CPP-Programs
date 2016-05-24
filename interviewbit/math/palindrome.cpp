#include <iostream>
using namespace std;
bool isPalindrome(int);
int main() {
	int n;
	cin >> n;
	cout << isPalindrome(n) << endl;
}
bool isPalindrome(int n) {
	if (n < 0)
		return false;
	int s = 0, m = n, a;
	while (m > 0) {
		a = m % 10;
		s = 10*s + a;
		m /= 10;
	}
	if (s == n)
		return true;
	return false;
}
