#include <iostream>
#include <cmath>
using namespace std;
int numberOfDigits(int);
int* halves(int);
int karatsuba(int, int);
int main(){
	int x, y;
	cin >> x >> y;
	cout << karatsuba(x, y);
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
	int n = numberOfDigits(x), p = n, s = 0, c = 1;
	int t[2] = {0};
	while(p > n/2){
		int a = x%10;
		x /= 10;
		s = s + c*a;
		c *= 10;
		p = numberOfDigits(x);
	}
	t[0] = x, t[1] = s;
	return t;
}
int karatsuba(int x, int y){
	int n = numberOfDigits(x);
	if(n == 2)
		return x*y;
	else{
		int a = halves(x)[0], b = halves(x)[1], c = halves(y)[0], d = halves(y)[1];
		int first = karatsuba(a, c), second = karatsuba(b, d), third = karatsuba(a+b, c+d), fourth = third - second - first;
		return first*pow(10, n) + second + fourth*pow(10, n/2);
	}
}
