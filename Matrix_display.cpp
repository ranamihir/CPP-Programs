#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n=0;
	
	cout << "Enter the order of the sqaure matrix: " << endl;
	cin >> n;
	
	int a[n][n];
	
	cout << "Enter the " << n*n << " elements of matrix A (row-wise): " << endl;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	
	cout << endl << endl;
	cout << "Matrix A = " << endl << setw(3);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << setw(3);
		}
		cout << endl;
	}
	
	return 0;
}
