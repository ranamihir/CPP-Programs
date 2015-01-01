#include <iostream>
using namespace std;
int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cout << endl;
		cin >> n;
		long long s = 0;
		long long *a = new long long [n];
		for(long long i = 0; i < n; i++){
			cin >> a[i];
			s += a[i]%n;
		}
		if(s%n == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
