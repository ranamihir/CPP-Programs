#include <iostream>

using namespace std;

int main()
{
	
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	
	for(int i = 0; i < 9; i++)
	{
		cout<<((i%3==0)?'\n':'\t');
		cout<<a[i/3][i%3];
	}
}
