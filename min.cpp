#include <iostream>

using namespace std;

int min(int x, int y)
{
	if (x > y)
		return y;

	else
		return x;
}

int main()
{
	
	int x, y, z;
	
	cout << "Enter the three numbers: " << endl;
	cin >> x >> y >> z;
	
	cout << "The smallest of these numbers is: " << min(x, min(y,z)) << endl;
	
	return 0;
}
