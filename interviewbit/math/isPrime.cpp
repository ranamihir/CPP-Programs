#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int);
int main() {
	int n;
	cin >> n;
	cout << isPrime(n) << endl;
}
int isPrime(int n) {
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (!(n % i))
			return 0;
	return 1;
}
