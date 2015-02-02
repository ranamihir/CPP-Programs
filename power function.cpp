// Function for pow

#include <iostream>
#include <cmath>

using namespace std;

long double power(double x, double n)
{
	double y=x;
	for(int i=1; i < n; i++)
	{
		y = y*x;
	}
	return y;
}

int main()
{
	double x, n;
	
	cout << "Enter the base number: " << endl;
	cin >> x;
	
	cout << "Enter the power: " << endl;
	cin >> n;
	
	cout << "The value of " << x << "^" << n << " is: " << power(x,n) << endl;
	
	return 0;
	
}
