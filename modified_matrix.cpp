#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	int n=0;
	
	cout << " Enter the order of the matrix: " << endl;
	cin >> n;
	
	int a[n][n];
	
	cout << " Enter the elements of matrix A (row-wise): " << endl;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		cin >> a[i][j];
	}
	
	cout << " Matrix A = " << endl << endl << setw(3);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << setw(3);
		}
		
		cout << endl;
	}
	
	cout << endl << endl;
	
	cout << " The modified matrix A = " << endl << endl << setw(3);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			if (i > j)
				a[i][j] = 0;
				
			else if (i < j)
				a[i][j] = 1;
			
			else
				;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << setw(3);
		}
		
		cout << endl;
	}
	
	cout << endl << endl;
	
	
	return 0;
}
