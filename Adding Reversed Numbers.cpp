#include <iostream>
using namespace std;
int reverseNumber(int x){
	int s=0;
	do {
	int a = x%10;
	x = x/10;
	s=10*s+a;
	} while(x!=0);
	return s;
}

int main(){
	int n;
	int *x = new int[n];
	int *y = new int[n];
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	for(int i = 0; i < n; i++)
		cout << reverseNumber(reverseNumber(x[i])+reverseNumber(y[i])) << endl;
	delete []x;
	delete []y;
	return 0;
}

