#include <iostream>

using namespace std;
int sum(int n)
{
	int a;
	static int s=0;
	a=n%10;
	s=s+a;
	if(n==0)
	return s;
	return sum(n/10);
}

int main()
{
	int n;
	cout<<endl<<"Enter a number:  ";
	cin>>n;
	cout<<"Sum of digits is  "<<sum(n);	
	return 0;
}
