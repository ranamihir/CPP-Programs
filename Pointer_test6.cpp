#include <iostream>

using namespace std;

int main()
{
	int a[3][3] = {0};
	int *aptr = a[0];
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cin >> *(aptr + 3*i + j) ;
		//aptr ++;
	}

	cout << endl << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cout << *((*a) + 3*i + j) << "   ";
		aptr++;
	}
	
	return 0;
}
