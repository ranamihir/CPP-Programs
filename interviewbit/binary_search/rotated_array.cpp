#include <iostream>
#include <vector>
using namespace std;
int findMin(const vector <int> &);
int main() {
	int n, value, i;
	cin >> n;
	vector <int> a;
	for(i = 0; i < n; i++) {
		cin >> value;
		a.push_back(value);
	}
	cout << findMin(a) << endl;
}
int findMin(const vector <int> &a) {
	int n = a.size();
	int low = 0, high = n - 1, mid, next, previous;
	while (low <= high) {
		if (a[low] <= a[high])
			return a[low];
		mid = low + (high - low)/2;
		next = (mid + 1) % n;
		previous = (mid + n - 1) % n;
		if (a[mid] <= a[next] && a[mid] <= a[previous])
			return a[mid];
		else if (a[mid] <= a[high])
			high = mid - 1;
		else if (a[mid] >= a[low])
			low = mid + 1;
	}
	return -1;
}
