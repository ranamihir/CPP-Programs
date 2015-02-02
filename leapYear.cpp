#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
	bool check = false;
	
	if(year%100 == 0)
	{
		if(year%400 == 0)
			check = true;
	}
	
	else
		if(year%4 == 0)
			check = true;
	
	return check;
}

int main()
{
	int year = 0;
	
	cout << "Enter the year: " << endl;
	cin >> year;
	
	if(isLeapYear(year) == true)
		cout << year << " is a leap year. " << endl;
	
	else
		cout << year << " is not a leap year. " << endl;
		
	return 0;
}
