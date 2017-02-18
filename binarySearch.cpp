#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch_Iterative(const vector <int> &, int);
int binarySearch_Recursive(const vector <int> &, int, int, int);
int main(){
	int n, value, i, x;
	cin >> n;
	vector <int> a;
	for(i = 0; i < n; i++) {
		cin >> value;
		a.push_back(value);
	}
	sort(a.begin(), a.end());
	cin >> x;
	cout << binarySearch_Iterative(a, x) << endl;
	cout << binarySearch_Recursive(a, x, 0, a.size() - 1) << endl;
}
int binarySearch_Iterative(const vector <int> &a, int x) {
	int low = 0, high = a.size() - 1, mid;
	while(low <= high) {
		mid = low + (high-low)/2;
		if (a[mid] == x)
			return true;
		else if (a[mid] < x)
			low = mid+1;
		else
			high = mid-1;
	}
	return -1;
}
int binarySearch_Recursive(const vector <int> &a, int x, int low, int high) {
	while(low <= high) {
		int mid = low + (high-low)/2;
		if (a[mid] == x)
			return true;
		else if (a[mid] < x)
			return binarySearch_Recursive(a, x, mid+1, high);
		else
			return binarySearch_Recursive(a, x, low, mid-1);
	}
	return -1;
}
