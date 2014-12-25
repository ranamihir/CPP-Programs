#include <iostream>
using namespace std;
int main(){
	long long t, m;
	bool n;
	cin >> t;
	while(t--){
		cin >> m >> n;
		if(!n)
			cout << "Airborne wins." << endl;
		else
			cout << "Pagfloyd wins." << endl;
	}
	return 0;
}
