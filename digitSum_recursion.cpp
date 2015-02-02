// Sum of digits of a number using recursion

#include <iostream>

using namespace std;

int sum = 0, i = 0;

int sumDigits(int n)
{
	
	if (n == 0)				// base case
		return sum;
		
	else					// recursive step
		{
			i = n%10;
			sum += i;
			return sumDigits(n/10);
		}
}

int main()
{
	
	int n = 0;
	
	cout << "Enter the number: " << endl;
	cin >> n;
	
	cout << "The sum of digits of " << n << " is: " << sumDigits(n) << endl;
	
	return 0;
}
