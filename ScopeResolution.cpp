#include<iostream>
using namespace std;
int tuna = 65;
void tunaPrint();
int main()
{
	cout<<tuna<<endl;
	tunaPrint();
}
void tunaPrint()
{
	int tuna = 12;
	cout<<::tuna<<endl;
}
