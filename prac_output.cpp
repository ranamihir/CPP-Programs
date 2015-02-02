#include<iostream>
using namespace std;
int play(int x,int &y)
	{
		y=y+30;
		return x+y;
	}
	

int main()
{
		cout<<play(1,2);
	return 0;
}
