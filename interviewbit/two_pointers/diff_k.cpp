#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int diffPossible(vector <int> &, int);
int main() {
	int n, i, k;
	cin >> n;
	vector <int> a (n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	cout << diffPossible(a, k) << endl;
}
int diffPossible(vector <int> &a, int k) {
	int i = 0, j = 1, n = a.size(), diff;
	while (i < n && j < n) {
		diff = a[j] - a[i];
		if (i != j && diff == k)
			return 1;
		else if (diff < k)
			j++;
		else
			i++;
	}
	return 0;
}
