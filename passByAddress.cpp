#include<iostream>
using namespace std;
int& add(int a,int b,int c)
{
	 c = a+b;
	 return c;
}
int main()
{
	int a = 5;
	int b = 1;
	int c = 2;
	add(a,b,c)  = 5;
	cout<<c;
	return 0;
}
