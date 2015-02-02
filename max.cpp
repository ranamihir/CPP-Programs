#include <iostream>

using namespace std;

int max(int n)
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
	
	int n = 0;
	
	cout << "Enter any positive integer: " << endl;
	cin >> n;
	
	cout << "The greatest digit of this number is: " << max(n) << endl;

	return 0;
	
}
