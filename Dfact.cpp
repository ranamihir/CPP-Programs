#include<iostream>
using namespace std;
int main()
{
	long m;
	while(cin>0)
	{
	cin>>m;
		int n;
		cin>>n;
		int *a = new int[n];
		long long *ans = new long long[n];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i-1];
			ans[i-1] = 1;
		}
		for(int  j =1;j<=n;j++){
			int temp = 1;
		for(int i=0;i<a[j-1];i++)
		{
			ans[j-1] = ans[j-1]%m;
			ans[j-1]= (ans[j-1]*temp)%m;
			temp++;
		}
		}

		for(int i =0;i<n;i++)
		{
			if(i!=n-1)
			cout<<ans[i];
			else
			cout<<ans[i];
		}
	}
		return 0;
}
		
	

