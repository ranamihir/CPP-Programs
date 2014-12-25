#include <iostream>
using namespace std;
int numOfDigits(long long);
long long sum(long long);
int main(){
	long n;
	bool check;
	cin >> n;
	long a = n;
	int count = 0;
	while(numOfDigits(a) > 0){
		if(sum(a) == 1){
			check = true;
			count++;
			break;
		}
		else if(sum(a) == 2 || sum(a) == 3 || sum(a) == 4 || sum(a) == 5 || sum(a) == 6 || sum(a) == 7 || sum(a) == 8 || sum(a) == 9 || sum(a) == 0){
			check = false;
			break;
		}
		else{
			count++;
			a = sum(a);
			check = true;
		}
	}
	if(!check)
		count = -1;
	cout << count << endl;
	return 0;
}
int numOfDigits(long long n){
	int c = 0;
	long long m = n;
	do{
		c++;
		m /= 10;
	} while(m != 0);	
	return c;
}
long long sum(long long n){
	long long a = n, s = 0;
	int m;
	while(a != 0){
		m = a%10;
		a = a/10;
		s += m*m;
	}
	return s;
}
