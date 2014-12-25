#include <iostream>
using namespace std;
long numOfSquares(int);
int main(){
	int n;
	while(1){
		cin >> n;
		if(n == 0)
			break;
		cout << numOfSquares(n) << endl;
	}
	return 0;
}
long numOfSquares(int n){
	long s = 0;
	for(int i = 1; i <= n; i++)
		s += i*i;
	return s;
}
