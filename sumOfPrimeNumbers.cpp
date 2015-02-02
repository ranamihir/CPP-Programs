#include <iostream>

using namespace std;

long int sum(long int n){
	long int s = 0;

	for(int i = 2; i <= n; i++){
		for(int j = 2; j < i; j++){
			if(i % j == 0)
				s += i;
		}
	}

	return s;
}

int main(){
	long int n = 0;

	cout << "Enter the number upto which sum of prime numbers is to be calculated: " << endl;
	cin >> n;

	cout << "The sum of prime numbers upto " + n " is = " + sum(n) << endl;

	return 0;
}