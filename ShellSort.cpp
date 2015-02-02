// Shell Sort

#include <iostream>
 
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	
	const int n = 5;
	int a[n] = {0};
	int temp = 0, d = 0;
	
	d = (n+1)/2;
	
	cout << "Enter any " << n << " integers to be placed in ascending and descending order: " << endl << endl;
	
	for(int i = 0; i < n; i++)
	cin >> a[i];
	cout << endl << endl;
	
	cout << "The elements in ascending order are: " << endl;
	
	while(d > 0)
	{
		for(int i = 0; i<n && (i+d)<n; i++)
		{
			if(a[i] > a[i+d])
				swap(a[i], a[i+d]);
		}
		
		d /= 2;
	}
	
	for (int i = 0; i < n; i++)
	cout << a[i] << "   ";
	cout << endl << endl;
	
	d = (n+1)/2;
	
	cout << "The elements in descending order are: " << endl;
	
	while(d > 0)
	{
		for(int j = 0; j < (n-d); j++)
		{
			if(a[j] < a[j+d])
				swap(a[j], a[j+d]);
		}
		
		d /= 2;
	}
	
	for (int i = 0; i < n; i++)
	cout << a[i] << "   ";
	cout << endl << endl;
	
	return 0;
}
