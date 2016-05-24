#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int isPrime(int);
vector <int> primeSum(int);
int main() {
	int n;
	cin >> n;
	vector <int> result = primeSum(n);
	cout << result[0] << " " << result[1] << endl;
}
int isPrime(int n) {
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (!(n % i))
			return 0;
	return 1;
}
vector <int> primeSum(int n) {
	vector <int> result;
	for(int i = 2; i < n-1; i++) {
		if (isPrime(i) && isPrime(n-i)) {
				result.push_back(i);
				result.push_back(n-i);
				return result;
		}
	}
}
