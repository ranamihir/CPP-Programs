#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
	int temp = 0;
	
	if(x < y)
	{
		temp = x;
		x = y;
		y = temp;
	}
}

int main()
{
	
	int x = 0, y = 0, z = 0;
	
	cout << "Enter any three positive integers that are to be arranged in ascending order: " << endl;
	cin >> x >> y >> z;
	
	swap(y,z);
	swap(x,y);
	swap(y,z);
	
	
	cout << "The numbers in descending order are: " << x << "  "<< y <<"  "<< z << endl;
	
	return 0;
}
