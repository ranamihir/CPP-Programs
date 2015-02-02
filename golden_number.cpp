#include <iostream>
#include <cmath>

using namespace std;

int number(int x)
{
	int a=0, sum=0;
	do {
	a = x%10;
	x = x/10;
	sum += pow(a,3);
	} while(x != 0);
	
	return sum;
}

int main()
{
	for(int i=1; i<=1000; i++)
	{
		if (number(i) == i)
		cout << i << endl;
	}
	
	return 0;
}
