#include <iostream>
using namespace std;
int numOfZeroes(long);
int main(){
	int t;
	cin >> t;
	long *s = new long[t];
	for(int i = 0; i < t; i++)
		cin >> s[i];
	for(long i = 0; i < t; i++)
		cout << numOfZeroes(s[i]) << endl;
	delete []s;
	return 0;
}
int numOfZeroes(long a){
	long s = a;
	int zeroes = 0;
	while(s){
		s /= 5;
		zeroes += s;
	}
	return zeroes;
}
