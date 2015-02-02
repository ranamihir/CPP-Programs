#include <iostream>
#include <cmath>

using namespace std;

int digit(int x, int y)
{
	for(int i=0; i < y; i++)
		x /= 10;
		return x%10;
}


int main()
{
	int n=0, k=0;
	
	cout << "Enter the integer: " << endl;
	cin >> n;
	
	cout << "Enter the digit to be found out: " << endl;
	cin >> k;
	
	cout << "The " << k << "th digit of " << n << " is: " << digit(n, k) << endl;
	
	return 0;	
	
}
