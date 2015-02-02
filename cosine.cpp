// Finding the value of cosx

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	int i=0, j=1, k=1, n=0, fac=1;
	double x=0, pi, y, cosine=0;
	
	pi = 3.14159;
	
	cout << "Enter the value of angle in degrees: " << endl;
	cin >> x;
	x = x*pi/180;
	
	cout << "Enter the number of terms upto which the series is to be evaluated: " << endl;
	cin >> n;
	
	
	for(i=0; i <= n; i+=2)
	{
		for(j=1; j<=i; j++)
		{
			fac = fac*j;
		}
		k++;
		cosine += (pow(x,i))*(pow(-1,k))/fac;
	}
	
	cout << "The value of cos" << x*180/pi << " is: " << cosine << endl;
	return 0;
}

