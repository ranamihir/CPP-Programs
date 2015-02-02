#include <iostream>
using namespace std;
int Multiply (int, unsigned int);

int main()
{
	int p,q;
	cout<<"Enter two integers; second integer should be positive"<<endl;
	cin >>p>>q;
	cout<<"The product is: "<<Multiply(p,q)<<endl;
	return 0;
}

int Multiply(int x, unsigned int y)
{
		if (y == 1)		// base case
			return x;
		else
			return x+Multiply(x, y-1);		// recursive step
}
