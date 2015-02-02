#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	
	cout << "Enter a number to be rounded off to the tenths digit: " << endl;
	cin >> x;
	
	if((x/10) % 2 == 0)
	{
		if(x%10 > 5)
			x += 10 - (x%10);
	
		else
			x -= (x%10);
	}
	
	else
	{
		if(x%10 >= 5)
			x += 10 - (x%10);
	
		else
			x -= (x%10);
	}
	
	cout << "The rounded off number is: " << x << endl;
	
	return 0;
}
