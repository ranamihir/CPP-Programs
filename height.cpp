#include <iostream>

using namespace std;

void height(int meters)
{
	int x = 0, y = 0;
	
	x = (meters - meters%12)/12;
	y = meters%12;
	
	cout << "Your height is: " << x << " feet and " << y << " inches." << endl;
}

int main()
{
	int meters = 0;
	
	cout << "Enter your height in inches: " << endl;
	cin >> meters;
		
	height(meters);
	
	return 0;
}
