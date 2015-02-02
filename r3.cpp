#include <iostream>
#include <cmath>

using namespace std;

long factorial(int n)
{	long fac=1;
	for(int i=1;i<=n;i++)
	fac=fac*i;
	return fac;
}
float powr(float x,float y)
{	float fac=x;
	for(int i=1;i<y;i++)
	fac=fac*x;
	return fac;
}
float power(float x, float y)
{
	double p = 1;
	for (int i = 0; i <= 10; i++)
	{
	 p +=powr(y,i+1)*1.0*powr(log(x),i+1)/factorial(i+1); 
	}
	return p;
}

int main()
{
	float x,y;
	cin>>x>>y;
	cout<<endl<<pow(x,y)<<endl<<power(x,y)<<endl;
	cout<<(pow(x,y)-powr(x,y))/powr(x,y);
}
