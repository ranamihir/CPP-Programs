#include <iostream>

using namespace std;

void array(int *aptr, int n)
{	
	cout <<"Enter the elements: " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> *aptr;
		aptr++;
	}
	
	cout << "The elements are: " << endl;
	
	aptr -= n;
	
	for(int i = 0; i < n; i++)
	{
		cout << *aptr << endl;
		aptr++;
	}
	
	aptr -= n;
}

int main()
{
	int a[5] = {1, 7, 10, 13, 15};
	
	int *aptr = a;
		
	for(int i = 0; i < 5; i++)
	{
		cout << "The value of a[" << i << "] is: " << *aptr << endl;
		cout << "The address of a[" << i << "] is: " << aptr << endl;
		aptr++;
	}
	
	cout << endl;
	
	aptr = a;

	cout << endl;
	
	for(int i = 0; i < 3; i++)
	{
		cout << *aptr << endl;
		aptr += 2;
	}
	
	cout << endl;
	
	aptr = a;
	array(aptr, 5);
	
	
	return 0;
}
