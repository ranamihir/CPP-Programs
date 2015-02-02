#include <iostream>
#include <cmath>

using namespace std;

int s=0;
float series=0;

float pi(int x)
{
	
		if (s == x)
		return series;
	
	else
	{
		s++;
		series += 4*(pow(-1, s+1))/(2*s-1);
		pi(x);
	}
}

int main()
{
	int n=0;
	
	cout << "Enter the number of terms upto which the value of pi is to be calculated: " << endl;
	cin >> n;
	
	cout << "The value of pi till " << n << " term(s) is: " << pi(n);
	
	return 0;
}
