#include <iostream>

using namespace std;

int noOfDays(int );
bool isLeapYear(int );

int main()
{
	int d = 0, m = 0, y = 0;
	
	cout << "Enter the day: " << endl;
	cin >> d;
	
	cout << "Enter the month: " << endl;
	cin >> m;
	
	cout << "Enter the year: " << endl;
	cin >> y;
	
	int s = 0;
	
	for (int i = 1; i < m; i++)
		s += noOfDays(m-1);
	
	cout << "The no. of days is: " << s + d << endl;
	
	return 0;
}

bool isLeapYear(int y)
{
	bool check = true;
	
	if (y % 400 == 0)
		check = true;
	
	else
	{
		if (y % 4 == 0)
			check = true;
		else
			check = false;
	}
	
	return check;
}

int noOfDays(int m)
{
	int days = 0;
	
	if (isLeapYear(m) == true)
	{
		switch(m) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: { days = 31;
				 break;
			}
			case 2: { days = 29;
				break;
			}
			case 4:
			case 6:
			case 9:
			case 11: { days = 30;
				break;
			}	
		}
	}
	
	else
	{
		switch(m) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: { days = 31;
				break;
			}
			case 2: { days = 28;
				break;
			}
			case 4:
			case 6:
			case 9:
			case 11: { days = 30;
				break;
			}
		}
	}
	return days;
}
