#include <iostream>

using namespace std;

int yo()
{
static int c=0;
c ++;
return c;
}

int main()
{
	int d = 10;
	for(int i=0;i<5;i++)
	cout<<yo();
	return 0;	
}
