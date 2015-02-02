#include <iostream>

using namespace std;

int calc(int n,int (*ptr)(int))
{
	int s= (*ptr)(n);
	return s;
}
int square(int x)
{
	return x*x;
}
int cube(int x)
{
	return x*x*x;
}

int main()
{
	int a;
	cin>>a;
	cout<<calc(a,square);
	cout<<endl<<calc(a,cube);
	return 0;
}
