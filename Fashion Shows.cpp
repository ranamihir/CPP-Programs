#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int *a = new int[n];
		int *b = new int[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
			cin >> b[i];
		sort(a, a+n);
		sort(b, b+n);
		long long h = 0;
		for(int i = 0; i < n; i++)
			h += a[i]*b[i];
		cout << h << endl;
		delete []a;
		delete []b;
	}
}
