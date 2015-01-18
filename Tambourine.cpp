#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int r, n;
	double R;
	while(1){
		cin >> r >> n;
		if(r == 0 && n == 0)
			break;
		else
			R = double(r)/sin(acos(-1)/(2*n));
		cout << setprecision(2) << fixed << R << endl;
	}
	return 0;
}
