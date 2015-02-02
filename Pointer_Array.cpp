#include <iostream>

using namespace std;

int main()
{
	int n = 0, x = 0;
	
	cout << "Enter the size of array A: " << endl;
	cin >> n;
	
	int a[n];
	
	cout << "Enter the " << n << " elements of A: " << endl;
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	cout << "Enter which element's value and address is to be displayed: " << endl;
	cin >> x;
	
	// Method 1 (Direct)
	cout << "Method 1 (Direct)" << endl;
	cout << "The value of " << x << "th element is: " << a[x-1] << endl;
	cout << "The address of a[" << x - 1 << "] is: " << &a[x-1] << endl << endl;
	
	// Method 2 (Using Pointers)
	cout << "Method 2 (Using Pointers)" << endl;
	int *aptr = a;
	
	cout << "The value of " << x << "th element is: " << *(aptr + (x-1)) << endl;
	cout << "The address of a[" << x - 1 << "] is: " << aptr + (x-1) << endl;
	return 0;
}
