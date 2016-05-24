#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector <int> allFactors(int);
int main() {
	int n;
	cin >> n;
	vector <int> result = allFactors(n);
	for(int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
}
vector <int> allFactors(int n) {
	vector <int> result;
	for (int i = 1; i <= sqrt(n); i++) {
		if (!(n % i)) {
			result.push_back(i);
			if (i != n/i)
				result.push_back(n/i);
		}
	}
	sort(result.begin(), result.end());
	return result;
}
