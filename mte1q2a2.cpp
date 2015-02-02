#include <iostream>
using namespace std;
int main()
{
	bool a=true; bool b=1; bool c=false;
	if (((a&&b) || c)||(b||(a==c)))
	{
		cout<<"No, this isn't the right guess"<<endl;
		cout<<"Proceed to the next condition"<<endl;
		if ((a||b)&&(c!=b))
		{
			cout<<"Your guess is correct \t"<<endl<<(b||c)<<endl;
		}
		else cout<<"Game over!"<<endl;
	}
}
