#include <iostream>
using namespace std;
int mod(int, int, int);
int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	cout << mod(a, b, c) << endl;
}
int mod(int a, int b, int c) {
    if (b == 0)
		return 1 % c;
    long long bar = 0;        
    if (b & 1) {
        bar = a % c;
        bar = (bar * mod(a, b-1, c)) % c;
    }
	else {
        bar = mod(a, b/2, c);
        bar = (bar * bar) % c;
    }
    return (int)((bar + c) % c);
}
