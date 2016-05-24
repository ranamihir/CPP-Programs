#include <iostream>
#include <vector>
using namespace std;
int findPivot(const vector <int> &);
int search(const vector <int> &, int);
int main() {
	int n, value, i, x;
	cin >> n;
	vector <int> a;
	for(i = 0; i < n; i++) {
			cin >> value;
			a.push_back(value);
	}
	cin >> x;
	cout << search(a, x);
}
int findPivot(const vector <int> &a) {
	int n = a.size();
	int low = 0, high = n - 1, mid, next, previous;
	while (low <= high) {
		if (a[low] <= a[high])
			return low;
		mid = low + (high - low)/2;
		next = (mid + 1) % n;
		previous = (mid + n - 1) % n;
		if (a[mid] <= a[next] && a[mid] <= a[previous])
			return mid;
		else if (a[mid] <= a[high])
			high = mid - 1;
		else if (a[mid] >= a[low])
			low = mid + 1;
	}
	return -1;
}
int search(const vector <int> &a, int x) {
	int n = a.size(), pivotIndex = findPivot(a);
	int low = 0, high = n-1, mid;
	if (a[pivotIndex] == x)
		return pivotIndex;
	else if (a[high] > x)
		low = pivotIndex + 1;
	else
		high = pivotIndex - 1;
	while(low <= high) {
		mid = low + (high-low)/2;
		if (a[mid] == x)
			return mid;
		else if (a[mid] < x)
			low = mid+1;
		else
			high = mid-1;
	}
	return -1;
}
