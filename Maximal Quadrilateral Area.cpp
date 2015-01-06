#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double maxArea(double, double, double, double);
int main(){
	int t;
	double a, b, c, d;
	cin >> t;
	while(t--){
		cin >> a >> b >> c >> d;
		cout << setprecision(2) << fixed << maxArea(a, b, c, d) << endl;
	}
	return 0;
}
double maxArea(double a, double b, double c, double d){
	double s = (a+b+c+d)/2;
	return sqrt((s-a)*(s-b)*(s-c)*(s-d));
}
