#include <iostream>
#include <cmath>

using namespace std;

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}

int maxDigit(int n)
{
	int a[n];
	int temp = 0, c = 0;
	
	c = n;
	
 	for (int i = 0; i < c; i++)
 	{
		a[i] = n%10;
		n = n/10;
	}
	
	for (int i = 0; i < c; i++)
	{
		for (int i = 0; i < c-1; i++)
		{
			if (a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;		
			}
		}
	}
	
	return a[c-1];
	
}

int main()
{
	
	int a = 0, b = 0, c = 0, a1 = 0, b1 = 0, c1 = 0;
	
	cout << "Enter any 3 positive integers: " << endl;
	cin >> a >> b >> c;
	
	cout << endl;
	
	a1 = maxDigit(a);
	b1 = maxDigit(b);
	c1 = maxDigit(c);
	
	cout << "The greatest digit of " << a << " is: " << a1 << endl;
	cout << "The greatest digit of " << b << " is: " << b1 << endl;
	cout << "The greatest digit of " << c << " is: " << c1 << endl << endl;
	
	cout << "The required number(in descending order) is: " << 100*max(a1, max(b1, c1)) + 10*(a1 + b1 + c1 - max(a1, max(b1, c1)) - min(a1, min(b1, c1))) + min(a1, min(b1, c1))  << endl;
	
	return 0;
	
}
