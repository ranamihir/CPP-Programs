#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n=0, m=0, p=0;
	
	cout << "Enter the order of the matrix A: " << endl;
	cin >> m >> n;
	
	cout << "Enter the order of the matrix B: " << endl;
	cin >> n >> p;
	
	int a[m][n], b[n][p], c[m][p];
	
	cout << "Enter the elements of matrix A (row-wise): " << endl;
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	
	cout << endl << endl;


	cout << "Enter the elements of matrix B (row-wise): " << endl;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cin >> b[i][j];
		}
	}
	
	cout << endl << endl;
	
	cout << "Matrix A = " << endl << endl << setw(3);
	
	for (int i = 0; i < m; i++)
	{
		for(int j=0; j < n; j++)
		{
			cout << a[i][j] << setw(3);
		}
		
		cout << endl;
	}
	cout << endl << endl;
	
	cout << "Matrix B = " << endl << endl << setw(3);
	
	for (int i = 0; i < n; i++)
	{
		for(int j=0; j < p; j++)
		{
			cout << b[i][j] << setw(3);
		}
		
		cout << endl;
	}
	cout << endl << endl;
	
	cout << "Matrix AB = " << endl << endl << setw(3);
	
	for (int i = 0; i < m; i++)
	{
		for (int k = 0; k < p; k++)
		{
			for (int j = 0; j < n; j++)
			c[i][k] += (a[i][j])*(b[j][k]);
		}
	}
		
	
	for (int i = 0; i < m; i++)
	{
		for(int j = 0; j < p; j++)
		{
			cout << c[i][j] << setw(3);
		}
		
		cout << endl;
	}
	
		
	return 0;
}
