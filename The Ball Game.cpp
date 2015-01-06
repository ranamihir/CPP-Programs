#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << setprecision(8) << fixed << double(n)/(n+1) << endl;
	}
	return 0;
}
