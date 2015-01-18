#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t, n, k;
	long sum;
	cin >> t;
	while(t--){
		sum = 0;
		cin >> n >> k;
		int *a = new int[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < k; i++){
			a[0] *= -1;
			sort(a, a+n);
		}
		for(int i = 0; i < n; i++)
			sum += a[i];
		cout << sum << endl;
		delete [] a;
	}
	return 0;
}
