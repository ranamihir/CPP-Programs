#include<iostream>
using namespace std;
int strlen(string a)
{ int i;
for( i=0;a[i]!='\0';i++)
;
return i;	
}
string toupper(string a)
{ int i;
for( i=0;a[i]!='\0';i++)
{if(a[i]>='a' && a[i]<='z')
a[i]=a[i]-32;
}	return a;
}
void del(string a,int loc)
{
	for(int i=loc;i<strlen(a)-1;i++)
	a[i]=a[i+1];
}
int main()
{
	string a,b;
	cin>>a>>b;
	a=toupper(a);	b=toupper(b);
	int l=strlen(a);	int check=0;
	for(int i=0;i<l;i++)
		for(int j=0;j<l-i;j++)
		if(a[i]==b[j])
		{
			check++;
			del(b,j);
			break;
		}
	if(check==l)
		cout<<"ANAGRAM!!";
	else
	cout<<"The strings are not anagrams wrt each other~~!!";
	return 0;
}
