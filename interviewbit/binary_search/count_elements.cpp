#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector <int> &, int, int, bool);
int findCount(const vector <int> &, int);
int main() {
	int n, x, value, i;
	cin >> n;
	vector <int> a;
	for(i = 0; i < n; i++) {
		cin >> value;
		a.push_back(value);
	}
	cin >> x;
	cout << findCount(a, x) << endl;
}
int binarySearch(const vector <int> &a, int n, int x, bool checkFirst) {
	int low = 0, high = n - 1, mid, result = -1;
	while(low <= high) {
		mid = low + (high-low)/2;
		if (a[mid] == x) {
			result = mid;
			if (checkFirst)
				high = mid - 1;
			else
				low = mid + 1;
		}
		else if (a[mid] < x)
			low = mid+1;
		else
			high = mid-1;
	}
	return result;
}
int findCount(const vector <int> &a, int x) {
	int n = a.size();
	int first = binarySearch(a, n, x, true);
	if (first == -1)
		return 0;
	int last = binarySearch(a, n, x, false);
	return (last - first + 1);
}
