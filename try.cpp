#include<iostream>
using namespace std;
int s=0,a=0,l=1;
int f(int n)
{
	if(n==0)
	return s;
	cout<<s<<",";
	s=a+l;
	a=l;
	l=s;
	
	f(--n);
}
int main()
{
	int n,l;
	cout<<"Enter number of terms till where you want the series to be displayed: " << endl;
	cin>>n;

	l=f(n);
	return 0;
}
