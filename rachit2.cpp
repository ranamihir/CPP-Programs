#include<iostream>
using namespace std;
void space(int n)
{
	for(int i=0;i<n;i++)	cout<<" ";
}
void star(int n)
{
	for(int i=0;i<n;i++)	cout<<"*";
}
int i=0;
int pattern(int n)
{
	
	space(n-1);
	star(2*i+1);
	i++;
	
	cout<<endl;
	if(n==1){
		cout<<endl<<endl<<endl<<"Function terminates";
		return 0;
	}
	pattern(--n);
}
int main()
{
	int n;
	cin>>n;
	pattern(n);
}
