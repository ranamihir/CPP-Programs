#include <iostream>
#include <cmath>

using namespace std;

int reverse(int x)
{
	int s=0;
	do {
	int a = x%10;
	x = x/10;
	s=10*s+a;
	} while(x!=0);
	return s;
}

int main()
{
	int n=0;
	
	cout << "Enter the number: " << endl;
	cin >> n;
	
	cout << "The reversed number is: " <<  reverse(n) << endl;
	
	return 0;
}
