#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int *iptr = &a;
	*iptr = *iptr*3;
	cout << a%4 - *iptr*a/a++ << endl;
	cout << *iptr << endl;		// value of *iptr, i.e. a
	cout << iptr;				// address of a
	
	return 0;
}
