#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int T, p0, p1, p, t, count = 1;
	cin >> T;
	while(T--){
		cin >> p0 >> p1 >> t >> p;
		double num = log(double(p)/p0);
		double den = log(double(p1)/p0);
		double time = (t*num/den);
		cout << "Scenario #" << count << ": " << setprecision(2) << fixed << time << endl;
		count++;
	}
	return 0;
}
