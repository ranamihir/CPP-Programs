#include <iostream>

using namespace std;

int factorial(int n)
{
	int fac = 1;
	
	for(int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	
	return fac;
}

int main()
{
	int n = 0, r = 0;
	
	cout << "Enter the value of n: " << endl;
	cin >> n;
	
	cout << "Enter the value of r: " << endl;
	cin >> r;
	
	
	int comb = factorial(n)/(factorial(n-r)*factorial(r));
	int perm = comb*factorial(r);
	
	cout << "The value of " << n << "C" << r << " is: " << comb << endl;
	cout << "The value of " << n << "P" << r << " is: " << perm << endl;
	
	
	return 0;
}
