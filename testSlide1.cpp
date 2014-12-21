#include<iostream>
using namespace std;
void change(int* b);
int main()
{
{ int a[ ]={10,20,30,40,50};
int* p[ ]={a,a+1,a+2,a+3,a+4};
int **ptr;
ptr=p;
**ptr++;
cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
*++*ptr;
cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
++**ptr;
cout<<ptr-p<<" "<<*ptr-a<<" "<<**ptr<<endl;
}
}

