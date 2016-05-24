#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int threeSumClosest(vector <int> &a, int);
int main() {
	int n, target, i;
	cin >> n;
	vector <int> a;
	a.resize(n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cin >> target;
	cout << threeSumClosest(a, target) << endl;
}
int threeSumClosest(vector <int> &a, int target) {
	sort(a.begin(), a.end());
	int result = 0, min = INT_MAX, i, j, k, n = a.size(), sum, diff;
	for (i = 0; i < n; i++) {
		j = i + 1;
		k = n - 1;
		while (j < k) {
			sum = a[i] + a[j] + a[k];
			diff = abs(sum - target);
			if(diff == 0)
				return sum;
			if (diff < min) {
				min = diff;
				result = sum;
			}
			if (sum < target)
				j++;
			else
				k--;
		}
	}
	return result;
}
