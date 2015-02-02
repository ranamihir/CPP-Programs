#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int, int);

int main(){
	isPrime(1, 10);
	cout << endl;
	
	return 0;
}

void isPrime(int m, int n){
	int p = 2;
	bool check[10] = {true};
	check[1] = false;
	for(int i = 2; i <= sqrt(n); i++)
		if(check[i])
			for(int j = i*i; j <= n; j+=i)
				check[j] = false;
	
	for(int i = m; i <= n; i++)
		if(check[i])
			cout << i << endl;
}
