#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin >> t;
	double r1, r2, r3, K1, K2, K3, K4, r;
	while(t--){
		cin >> r1 >> r2 >> r3;
		K1 = 1/r1;
		K2 = 1/r2;
		K3 = 1/r3;
        K4 = K1+K2+K3+2*sqrt((K1*K2)+(K2*K3)+(K1*K3));
        r=1/K4;
		cout << setprecision(6) << fixed << r << endl;
	}
	return 0;
}
