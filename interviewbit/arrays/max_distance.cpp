#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumGap(const vector<int> &);
int main() {
  int n, i;
  cin >> n;
  vector <int> A;
  A.resize(n);
  for(i = 0; i < n; i++)
    cin >> A[i];
  int result = maximumGap(A);
  cout << result << endl;
}
int maximumGap(const vector<int> &a) {
	int n = a.size(), i, j, maxDiff = -1;
	vector<int> lmin (n), rmax (n);
	lmin[0] = a[0];
	rmax[n-1] = a[n-1];
	for(i = 1; i < n; i++)
		lmin[i] = min(a[i], lmin[i-1]);
	for(j = n-2; j >= 0; j--)
		rmax[j] = max(a[j], rmax[j+1]);
	i = 0, j = 0;
	while(i < n && j < n) {
		if(lmin[i] <= rmax[j]) {
			maxDiff = max(maxDiff, j-i);
			j++;
		}
		else
			i++;
	}
	return maxDiff;
}
