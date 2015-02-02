#include <iostream>
#include <iomanip>

using namespace std;

class Time {
	int hours;
	int minutes;
	int seconds;
	
	public:
		friend void setTime(Time &, int, int, int);
		friend void displayTime(Time &);
};

void setTime(Time &t, int h, int m, int s)
{
	if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
	{
		t.hours = h;
		t.minutes = m;
		t.seconds = s;
	}
	
	else
		cout << "Invalid arguments!" << endl;
}

void displayTime(Time &t)
{
	cout << setfill('0') << setw(2) << t.hours << ":" << setw(2) << t.minutes << ":" << setw(2) << t.seconds << endl;
}

int main()
{
	Time t1;
	int h = 0, m = 0, s = 0;
	
	cout << "Enter the hours: " << endl;
	cin >> h;
	
	cout << "Enter the minutes: " << endl;
	cin >> m;
	
	cout << "Enter the seconds: " << endl;
	cin >> s;
	
	
	setTime(t1, h, m, s);
	
	cout << "The universal time is: " << endl;
	displayTime(t1);
	cout << endl;

	
	return 0;
}
