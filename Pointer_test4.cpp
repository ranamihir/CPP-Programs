#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n = 0, m = 0, s = 0;
	
	cout << "Enter number of elements: " << endl;
	cin >> n;
	
	char *x[n];
	
	cout << "Enter the " << n << " elements: " << endl;
	for(int i = 0; i < n; i++)
	{
			x[i] = new char[50];
			cin.getline(x[i],50);
			cout << endl;
	}
	
	cout << "Enter which word's number of characters is to be calculated: " << endl;
	cin >> m;
	
	for(int i = 0; x[m-1][i] != '\0'; i++)
	{
		s++;
	}
	
	cout << "The number characters in " << x[m-1] << " is: " << s << endl;
	
	for(int i = 0; i < n; i++)
	{
		delete []x[i];
	}
	
	return 0;
}
