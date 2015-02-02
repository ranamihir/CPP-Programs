#include <iostream>
#include <iomanip>

using namespace std;

class Time {
	int hours;
	int minutes;
	int seconds;
	
	public:
		Time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
		{
		}
		void printUniversal();
		void operator-(Time &t);
};

void Time::operator-(Time &t)
{
	hours -= t.hours;
	minutes -= t.minutes;
	seconds -= t.seconds;
}

int main()
{
	Time t1(13, 27, 20), t2(6, 20, 7);
	
	cout << "In India, \n";	
	cout << "The universal time is: " << endl;
	t1.printUniversal();
	cout << endl << endl;
	
	
	cout << "In London, \n";
	cout << "The universal time is: " << endl;
	t2.printUniversal();
	cout << endl << endl;
	
	t1-t2;
	cout << "The time difference is: " << endl;
	t1.printUniversal();
	cout << endl << endl;
	
	
	return 0;
}

void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;
}
