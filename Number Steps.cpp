#include <iostream>
using namespace std;
int number(int, int);
int main(){
	int t, x, y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(number(x, y) != -1)
			cout << number(x, y) << endl;
		else
			cout << "No Number" << endl;
	}
	return 0;
}
int number(int x, int y){
	int r = -1;
	if(x == y){
		if(y%2 == 0){
			r = 2*y;
		}
		else{
			r = 2*y-1;
		}
	}
	else if(x == y+2){
		if(x%2 == 0){
			r = 2*x-2;
		}
		else{
			r = 2*x-3;
		}
	}
	return r;
}
