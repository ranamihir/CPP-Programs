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
	
	if(a-2*(a/2) == 0)
		cout << "The number is even." << endl;
	else
		cout << "The number is odd." << endl;
}
