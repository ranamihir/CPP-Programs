#include <iostream>
#include <vector>
using namespace std;
int singleNumber(const vector <int> &);
int main() {
	int n, i;
	cin >> n;
	vector <int> a;
	a.resize(n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cout << singleNumber(a) << endl;
}
int singleNumber(const vector <int> &a) {
	int mask = a[0];
	for(int i = 1; i < a.size(); i++)
		mask = mask^a[i];
	return mask;
}
