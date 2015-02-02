#include <iostream>

using namespace std;

long int factorial(int n)
{
	if (n == 1)
		return n;
	
	else
		return n*factorial(n-1);
}

int main()
{
	
	int n = 1;
	
	cout << "Enter the number whose factorial is to be calculated: " << endl;
	cin >> n;
	
	cout << "The factorial of integer " << n << " is: " << factorial(n) << endl;
	
	return 0;
}
