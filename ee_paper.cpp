#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int len=a.size();
	cout << len;
	
	int* ptr=new int[len];
	for(int i=0;i<len;i++)
	{
		ptr[i]=int(a[i])-int('0');
		cout<<ptr[i];
	}
	
	return 0;
}
