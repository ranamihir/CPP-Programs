#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 5;
	int *  const ptr;
	ptr = &a;
	cout<<*ptr;
	//*ptr  = *ptr+5;
	ptr = &b;
	cout<<*ptr;
	return 0;
}
