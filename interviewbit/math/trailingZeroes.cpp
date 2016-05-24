#include <iostream>
using namespace std;
int trailingZeroes(int);
int main() {
	int n;
	cin >> n;
	cout << trailingZeroes(n) << endl;
}
int trailingZeroes(int n) {
	int m = n, count = 0;
	while (m != 0) {
		m /= 5;
		count += m;
	}
	return count;
}
