#include <iostream>
using namespace std;
long long sumOfDigits(long long);
int main(){
	int t;
	cin >> t;
	long long n;
	while(t--){
		cin >> n;
		while(1){
			if(!(n%sumOfDigits(n)))
				break;
			else
				n++;
		}
		cout << n << endl;
	}
	return 0;
}
long long sumOfDigits(long long x){
	long long sum=0;
	do {
	int a = x%10;
	x = x/10;
	sum += a;
	} while(x != 0);
	
	return sum;
}
