#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,k;
   cin>>n;	
   for(i=1;i<=n;i++)
   {
   	cout<<setfill(' ')<<setw(2*n-i+1)<<"*";
   	
  	for(k=n-i+1;k>=i;k--)
   	{
   		cout<<"*";
   	}
   cout<<endl;
   }

}
