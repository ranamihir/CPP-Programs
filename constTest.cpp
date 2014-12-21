#include<iostream>
using namespace std;
int sum(const int a,int b)
{
	a+=10;
	return a+b;
}
int main()
{
	cout<<sum(5,4);
	
}

