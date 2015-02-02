#include <iostream>

using namespace std;

void display_zeroes(int);
long int factorial(int);
int no_of_zeroes(int);

int main()
{
	int n = 0;
	
	cout << "Enter the number whose number of trailing zeroes in its factorial is to be" << endl << "determined: " << endl;
	cin >> n;
	
	display_zeroes(n);
	
	return 0;
}

long int factorial(int n)
{
	long int fac = 1;
	
	for(int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	
	return fac;
}

int no_of_zeroes(int n)
{
	long int x = factorial(n), s = 0;
	
	do {
		int a = x%10;
		x /= 10;
		
		if(a == 0)
			s++;
		
		else
			continue;
		
		
	} while(x > 0);
	
	return s;
}

void display_zeroes(int n)
{
	cout << "The number of trailing zeroes in " << n << "! is: " << no_of_zeroes(n) << endl;
}
