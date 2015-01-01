#include <iostream>
using namespace std;
long long sumAbs(long [], int);
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		long *a = new long[n];
		for(long i = 0; i < n; i++)
			cin >> a[i];
		cout << sumAbs(a, n) << endl;
	}
	return 0;
}
long long sumAbs(long a[], int n){
	long long sum = 0;
	for (int i=0;i<n/2;i++){
			sum+=((n- 2*i -1)*(a[n-i-1] - a[i]));
    	}
    return sum;
}
