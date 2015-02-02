#include <iostream>

using namespace std;

int gcd(int x, int y)
{	
	int rem = 0;
	
	do {
		rem = x%y;
		x = y;
		y = rem;
	}	while (y != 0);
	
	return x;
}


int lcm(int x, int y)
{
	int LCM = x*y/gcd(x, y);
	return LCM;
}


int main()
{
	int x = 0, y = 0;
	
	cout << "Enter any two positive integers whose LCM is to be found out: " << endl;
	cin >> x >> y;
	
	cout << "The LCM of these two numbers is: " << lcm(x, y) << endl;
	
	return 0;
}
