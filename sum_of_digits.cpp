#include <iostream>
#include <cmath>

using namespace std;

int sum(int x)
{
	int sum=0;
	
	do {
	
	int a = x%10;
	x = x/10;
	sum += a;
	} while (x != 0);
	
	return sum;
}

int main()
{
	int n=0;
	
	cout << "Enter the number: " << endl;
	cin >> n;
	
	cout << "The sum of digits is: " << sum(n) << endl;
	
	return 0;
}
