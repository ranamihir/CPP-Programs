#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned int n)
{
	bool check = true;
	if (n == 1)
		check = false;
	
	else if (n%2 == 0)
	{
	if (n != 2)
			check = false;
	}
	
	else
	{
		for (int i = 3; i <= sqrt(n); i++)
			if (n%i == 0)
				check = false;
	}
	
	return check;
}


int howManyPrimes(unsigned int p, unsigned int q)
{
	int counter = 0;
	for (int i = p; i < q+1; i++)
		if (isPrime(i) == true)
			counter++;
	return counter;
}


int main()
{
	int x = 0, y = 0;
	
	cout << "Enter any two positive integers: " << endl;
	cin >> x >> y;
	
	cout << "The number of primes in the range [" << x << ", " << y << "] are: " << howManyPrimes(x, y) << endl;
	return 0; 
}
