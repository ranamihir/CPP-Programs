#include <iostream>
#include <cmath>

using namespace std;

double fac(int x)
{
	int fac = 1;
	for (int i=1; i<=x; i++)
	fac = fac*i;
	return fac;
}

double C(int x, int y)
{
	return fac(x)/(fac(y)*fac(x-y));
}

int main()
{
	int n=0, i, j, k;
	
	cin >> n;
	k=n;
	for(i=1; i<=n; i++)
	{	
		k--;
		for(int x=k; x>=1; x--)
		cout << " ";
		
		for(j=0; j<i; j++)
		cout << C(i-1, j) << " ";
		cout << endl;
	}
	
	return 0;
}
