#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector <int> sieve(int);
int main() {
	int n;
	cin >> n;
	vector <int> result = sieve(n);
	for(int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
}
vector <int> sieve(int n) {
	vector <int> primes, result;
	primes.resize(n+1, 1);
	primes[0] = 0;
	primes[1] = 0;
	for(int i = 2; i <= sqrt(n); i++)
		if (primes[i])
			for(int j = 2; i*j <= n; j++)
				primes[i*j] = 0;
	for(int i = 0; i < n+1; i++)
		if (primes[i])
			result.push_back(i);
	return result;
}
