#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	
	cin >> n;
	
	int *a = new int [n];
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
		
	int *b = new int [n-1];
	
	for(int i = 0; i < n-1; i++)
		b[i] = a[i];
		
	
	
	delete [] a;
	
	for(int i = 0; i < n-1; i++)
		cout << b[i] << " ";
		
	delete [] b;
		
	return 0;
}
