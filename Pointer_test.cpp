#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	
	cout << "Enter the value of a: " << endl;
	cin >> a;
	
	int *aptr = &a;
	int **bptr = &aptr;
	
	cout << "The value of a is: " << *aptr << endl;
	cout << "The address of a is: " << aptr << endl;
	cout << "The address of aptr is: " << bptr << endl << endl;
	
	int n[3] = {1, 2, -100};
	
	int *nptr1 = n;
	int *nptr2 = &n[2];
	cout << "nptr2 - nptr1 = " << nptr2 - nptr1 << endl << endl;
	
	if(nptr1 > nptr2)
		cout << "1" << endl;
		
	if (nptr1 < nptr2)
		cout << "2" << endl;
	
	return 0;
}
