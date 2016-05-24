#include <iostream>
#include <vector>
using namespace std;
int searchMatrix(const vector <vector <int> > &, int);
int main() {
	int m, n, value, i, j, x;
	cin >> m >> n;
	vector <vector <int> > a;
	a.resize(m);
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			cin >> value;
			a[i].push_back(value);
		}
	}
	cin >> x;
	cout << searchMatrix(a, x);
}
int searchMatrix(const vector <vector <int> > &a, int x) {
	int m = a.size(), n = a[0].size();
	int low, high, mid, i;
	for(i = 0; i < m; i++) {
		low = 0;
		high = n-1;
		while(low <= high) {
			mid = low + (high-low)/2;
			if (a[i][mid] == x)
				return true;
			else if (a[i][mid] < x)
				low = mid+1;
			else
				high = mid-1;
		}
	}
	return false;
}
