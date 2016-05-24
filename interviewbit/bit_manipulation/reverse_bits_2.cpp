#include <iostream>
using namespace std;
unsigned int reverse(unsigned int);
int main() {
	unsigned n;
	cin >> n;
	cout << reverse(n) << endl;
}
unsigned int reverse(unsigned int num) {
	unsigned int  NO_OF_BITS = sizeof(num) * 8, reverse_num = 0, i;
    for (i = 0; i < NO_OF_BITS; i++)
        if((num & (1 << i)))
            reverse_num |= (1 << ((NO_OF_BITS - 1) - i));
    return reverse_num;
}
