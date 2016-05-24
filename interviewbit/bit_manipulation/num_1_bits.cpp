#include <iostream>
using namespace std;
int numSetBits(unsigned int);
int main() {
	unsigned n;
	cin >> n;
	cout << numSetBits(n) << endl;
}
int numSetBits(unsigned int n) {
	int count = 0;
	while (n) {
		n = n & (n-1);
		count++;
	}
	return count;
}
