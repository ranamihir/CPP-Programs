#include <iostream>
using namespace std;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n & 1)
			cout << "Sorry Shaktiman" << endl;
		else
			cout << "Thankyou Shaktiman" << endl;
	}
	return 0;
}
