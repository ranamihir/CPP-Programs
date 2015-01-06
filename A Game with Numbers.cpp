#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int r = n%10;
	if(!r)
		cout << 2 << endl;
	else{
		cout << 1 << endl;
		cout << r << endl;
	}
	return 0;	
}
