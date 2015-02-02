#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>a[i][j];
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<"\t"<<*((*a)+3*i+j);
		cout<<endl;
	}
	cout << endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<"\t"<<&a[i][j];
		cout<<endl;
	}
	
	cout<<endl;
	cout<<a+1<<endl<<*((a+1)[1])<<endl<<*(a+1)<<endl<<&(a+1)[0]<<endl<<&(a)[1][0] << endl;
	
	return 0;
}
