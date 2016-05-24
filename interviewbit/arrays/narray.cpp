#include <iostream>
#include <vector>
using namespace std;
vector <int> repeatedNumber(const vector<int> &);
int main() {
	int n, i, value;
	cin >> n;
	vector <int> a, result;
	for (i = 0; i < n; i++) {
		cin >> value;
		a.push_back(value);
	}
	result = repeatedNumber(a);
	cout << result[0] << " " << result[1] << endl;
}
vector <int> repeatedNumber(const vector<int> &a) {
	long long n = a.size(), totalLinearSum = 0, totalSquareSum = 0, m = n*(n+1)/2, k;
	for(int i = 0; i < n; i++) {
		k = (long long)a[i];
		totalLinearSum += k;
		totalSquareSum += k*k;
	}
	long long sum = (totalSquareSum - n*(n+1)*(2*n+1)/6)/(totalLinearSum - m);
	long first = (sum + totalLinearSum - m)/2;
	long second = sum - first;
	vector <int> result;
	result.push_back(first);
	result.push_back(second);
	return result;
}
