#include <iostream>

using namespace std;

int numberOfDigits(int);

int main()
{
	int n = 0;
	
	cin >> n;
	
	cout << numberOfDigits(n);
	
	return 0;
}

int numberOfDigits(int n)
{
	int c = 0;
	int m = n;
	
	do{
		c++;
		m /= 10;
	} while(m != 0);
	
	return c;
}
