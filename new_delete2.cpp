#include <iostream>

using namespace std;

int main()
{
		int n = 0;
	
	cout << "Enter the size of array: " << endl;
	cin >> n;
	
		double *a = new double[n];
		
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		
		return 0;
}
