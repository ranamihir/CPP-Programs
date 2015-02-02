#include <iostream>

using namespace std;

int main()
{
	
	int n=0, i=0, j=0, k=0;
	
	cout << "Enter the number of rows: " << endl;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i - 1; j++)
		cout << " ";
		
		for (int k = 1; k <= n + 1 - i; k++)
		cout << "*";
		
		cout << endl;
	}

	
	return 0;
}
