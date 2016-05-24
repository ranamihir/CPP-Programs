#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(const vector <int> &, int, int, bool);
vector <int> searchRange(const vector <int> &, int);
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
	vector <int> result = searchRange(a, x);
	cout << result[0] << " " << result[1] << endl;
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
vector <int> searchRange(const vector <int> &a, int x) {
	int n = a.size();
	int first = binarySearch(a, n, x, true);
	int last = binarySearch(a, n, x, false);
	vector <int> result;
	result.push_back(first);
	result.push_back(last);
	return result;
}
