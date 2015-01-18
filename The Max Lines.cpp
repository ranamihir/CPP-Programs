#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int t, count = 1;
	long long r;
	cin >> t;
	while(t--){
		cin >> r;
		double max = double(4*r*r) + 0.25;
		cout << "Case " << count << ": " << setprecision(2) << fixed << max << endl;
		count++;
	}
	return 0;
}
