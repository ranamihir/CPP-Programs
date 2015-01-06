#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		double ans;
		ans = (3.0/4.0) + (1.0/(2*(n+2)))-(1.0/(2*(n+1)));
		cout << setprecision(11) << fixed << ans << endl;
	}
	return 0;
}
