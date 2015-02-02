// Swapping 2 numbers without introducing a 3rd variable

#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0;
	
	cout << "Enter the two numbers that are to be swapped: " << endl;
	cin >> x >> y;
	
	cout << "The original numbers are: " << x << ", " << y << endl;
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	cout << "The swapped numbers are: " << x << ", " << y << endl;
	
	return 0;
	
}
