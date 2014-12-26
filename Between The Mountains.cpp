#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void minDifference(long [], int, long [], int);
int main(){
	int t, m, n;
	cin >> t;
	while(t--){
		cin >> m;
		long *a = new long[m];
		for(int i = 0; i < m; i++)
			cin >> a[i];
		cin >> n;
		long *b = new long[n];
		for(int i = 0; i < n; i++)
			cin >> b[i];
		sort(a, a+m);
		sort(b, b+n);
		minDifference(a, m, b, n);
		delete []a;
		delete []b;
	}
	return 0;
}
void minDifference(long a[], int m, long b[], int n){
	int min = 1000000;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++){
			if(min > abs(a[i]-b[j]))
				min = abs(a[i]-b[j]);
		}
	cout << min << "\n";
}
