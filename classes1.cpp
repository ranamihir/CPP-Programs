#include <iostream>
#include <iomanip>

using namespace std;

class Time {
	int hours;
	int minutes;
	int seconds;
	
	public:
		void setTime(int, int, int);
		void printUniversal();
		void printStandard();
		void timeGap(Time);
		Time();
};

Time::Time()
{
	hours = minutes = seconds = 0;
}

int main()
{
	Time t1, t2;

	cout << "In India, \n";
	cout << "The initial universal time is: " << endl;
	t1.printUniversal();
	cout << endl;
	
	cout << "The initial standard time is: " << endl;
	t1.printStandard();
	cout << endl << endl;
	
	t1.setTime(13, 27, 20);
	
	cout << "The changed universal time is: " << endl;
	t1.printUniversal();
	cout << endl;
	
	cout << "The changed standard time is: " << endl;
	t1.printStandard();
	cout << endl << endl;
	
	
	cout << "In London, \n";
	cout << "The initial universal time is: " << endl;
	t2.printUniversal();
	cout << endl;
	
	cout << "The initial standard time is: " << endl;
	t2.printStandard();
	cout << endl << endl;
	
	t2.setTime(6, 30, 7);
	
	cout << "The changed universal time is: " << endl;
	t2.printUniversal();
	cout << endl;
	
	cout << "The changed standard time is: " << endl;
	t2.printStandard();
	cout << endl << endl;
	
	
	t1.timeGap(t2);
	cout << endl << endl;
	
	
	return 0;
}

void Time::setTime(int h, int m, int s)
{
	if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	
	else
		cout << "Invalid arguments!" << endl;
}

void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;
}

void Time::printStandard()
{
	cout << setfill('0') << setw(2) << (hours >= 12 ? hours%12 : hours) << ":" << setw(2)
	     << minutes << ":" << setw(2) << seconds << (hours >= 12 ? " PM" : " AM") << endl;
}

void Time::timeGap(Time t)
{
	int time_dummy;
	time_dummy = (hours - t.hours)*3600 + (minutes - t.minutes)*60 + (seconds - t.seconds);
	if(hours < t.hours)
	{
		time_dummy*=-1;
	}
	
	cout << "The time difference is: " << time_dummy/3600 << " hours " << (time_dummy%3600)/60
		 << " minutes and " << (time_dummy%3600)%60 << " seconds." << endl;
}
