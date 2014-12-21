#include <iostream>
using namespace std;
int main()
{
	/*char *str = "IIT ROORKEE";
	cout<<str<<endl;
	cout<<*(str + 4);*/
	int a[10];
	for(int i = 0;i<10;i++)
	{
		a[i] = i+1;
	}
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<a+2<<endl;
//	cout<&(a+0)<<endl;
	cout<<*(a+0)<<endl;
	return 0;
}
