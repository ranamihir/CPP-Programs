#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a = 0, c = 0;
	double b = 0.0;
	
	cin >> a;
	
	b = a/2;
	c = b/1;
	
	if(2*b == c)
		cout << "Even." << endl;
	else
		cout << "Odd." << endl;
	
	return 0;
}
