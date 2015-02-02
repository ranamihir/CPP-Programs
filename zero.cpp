#include <iostream>
#include <cmath>

using namespace std;

int zero(int x)
{
	int a,k=1;
 	int s=0;
 	do {
	a = x%10;
	x = x/10;
	
	if (a==0);
	else
	{
		s=s+k*a;
		k=10*k;
	}
}while(x!=0);
		return s;
}
	
int main()
{
	int n;
	cin>>n;
	cout<<zero(n);
}
