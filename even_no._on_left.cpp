#include <iostream>

using namespace std;

int main()
{
	int n = 0, temp = 0;
	
	cout << "Enter the size of array A: " << endl;
	cin >> n;
	
	int a[n];
	
	cout << "Enter the elements of array A: " << endl;
	for(int i = 0; i < n; i++)
		cin >> a[i];
		
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			temp = a[i];
			
			for(int j = i-1; j >= 0; j--)
			{
				a[j+1] = a[j];
			}
			
			a[0] = temp;
			
		}
	}
	
	cout << "The new array A is: " << endl;
	for(int i = 0; i < n; i++)
		cout << a[i] << "   ";
	
	cout << endl;
	
	return 0;
}
