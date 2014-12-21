#include <iostream>
using namespace std;
bool binarySearch(int *a,int size,int b,int low1,int high1)
{
	int high = high1;
	int low = low1;
	int n = size;
	int mid = (low+high)/2;
	do
	{
		if(a[mid] ==b)
		return true;
		if(a[mid]<b)
		{
			low = mid+1;
			mid = (low+high)/2;
		}
		if(a[mid]>b)
		{
			high = mid-1;
			mid = (low+high)/2;
		}
	}while(low!=high && a[mid]!=b);
	if(a[mid] == b)
	return true;
	return false;
}
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int *a = new int[n];
	cout<<"enter the element of array"<<endl;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element to be searched"<<endl;
	int b;
	cin>>b;
	if(binarySearch(a,n,b,0,n-1))
	cout<<"the element exists"<<endl;
	else
	cout<<"it doesnt exists"<<endl;
}
