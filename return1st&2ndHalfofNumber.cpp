#include <iostream>
using namespace std;
int numberOfDigits(int);
int* halves(int);
int main(){
	int a;
	cin >> a;
	int *t = halves(a);
	cout << t[0] << " " << t[1] << endl;
	return 0;
}
int numberOfDigits(int n){
	int c = 0, m = n;
	do{
		c++;
		m /= 10;
	} while(m != 0);
	return c;
}
int* halves(int x){
	int n = numberOfDigits(x), j = x, p = n, s = 0, c = 1;
	while(p > n/2){
		int a = j%10;
		j /= 10;
		s += s + c*a;
		c *= 10;
		p = numberOfDigits(j);
	}
	int t[2] = {j, s};
	return t;
}
