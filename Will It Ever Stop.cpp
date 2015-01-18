#include <iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	if(n & (n-1))
		cout << "NIE" << endl;
	else
		cout << "TAK" << endl;
	return 0;
}
