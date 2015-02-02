#include <iostream>
#include <iomanip>

using namespace std;

class Time {
	int hours;
	int minutes;
	int seconds;
	
	public:
		void setTime(int, int, int);
		void setHour(int);
		void setMinute(int);
		void setSecond(int);
		
		int getHour();
		int getMinute();
		int getSecond();
		
		void printUniversal();
		void printStandard();
		
		Time();
		Time(int, int, int);
};


Time::Time()
{
	hours = minutes = seconds = 0;
}


Time::Time(int h, int m, int s)
{
	setTime(h, m, s);
}


int main()
{
	Time t1;
	int h = 0, m = 0, s = 0;

	cout << "The initial universal time is: " << endl;
	t1.printUniversal();
	cout << endl;
	
	cout << "The initial standard time is: " << endl;
	t1.printStandard();
	cout << endl << endl;
	
	cout << "Enter the hours: " << endl;
	cin >> h;
	
	cout << "Enter the minutes: " << endl;
	cin >> m;
	
	cout << "Enter the seconds: " << endl;
	cin >> s;
	
	t1.setTime(h, m, s);
	
	cout << "The changed universal time is: " << endl;
	t1.printUniversal();
	cout << endl;
	
	cout << "The changed standard time is: " << endl;
	t1.printStandard();
	cout << endl << endl;
	
	
	return 0;
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if(h >= 0 && h < 24)
	{
		hours = h;
	}
	
	else
		cout << "Invalid argument!" << endl;
}

void Time::setMinute(int m)
{
	if(m >= 0 && m < 60)
	{
		minutes = m;
	}
	
	else
		cout << "Invalid argument!" << endl;
}

void Time::setSecond(int s)
{
	if(s >= 0 && s < 60)
	{
		seconds = s;
	}
	
	else
		cout << "Invalid argument!" << endl;	
}

int Time::getHour()
{
	return hours;
}

int Time::getMinute()
{
	return minutes;
}

int Time::getSecond()
{
	return seconds;
}

void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard()
{
	cout << setfill('0') << setw(2) << (getHour() >= 12 ? getHour()%12 : getHour()) << ":" << setw(2)
	     << getMinute() << ":" << setw(2) << getSecond() << (getHour() >= 12 ? " PM" : " AM") << endl;
}
