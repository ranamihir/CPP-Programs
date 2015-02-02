#include <iostream>
#include <cmath>

using namespace std;

int zero(int x)
{
	int a;
 	int s=0;
 	
 	int k=1;
 	do {
	a = x%10;
	x = x/10;
	
	if(a!=0)
	{
		s+=k*a;
		k*=10;
	}
	
	else
	{
		s+=k;
		k*=10;
	}
	
	} while (x != 0);
	return s;
}

int main()
{
	int n=0;
	
	cout << "Enter the number: " << endl;
	cin >> n;
	
	cout << "The modified number is: "<<zero(n);
	
	
	return 0;
}
			
