#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin >> t;
	double a, b;
	while(t--){
		cin >> a >> b;
		cout << setprecision(3) << fixed << 2*sqrt(a*a-b*b) << endl;
	}
	return 0;
}
