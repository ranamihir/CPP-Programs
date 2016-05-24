#include <iostream>
using namespace std;
unsigned int reverse(unsigned int);
int main() {
	unsigned n;
	cin >> n;
	cout << reverse(n) << endl;
}
unsigned int reverse(unsigned int n) {
	unsigned int count = sizeof(n) * 8 - 1, reverse_n = n;
    n >>= 1;
    while(n) {
       reverse_n <<= 1;
       reverse_n |= n & 1;
       n >>= 1;
       count--;
    }
    reverse_n <<= count;
    return reverse_n;
}
