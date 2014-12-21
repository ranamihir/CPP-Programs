#include<iostream>
using namespace std;
int length;
int *b = new int[length];
void merge(int *a,int low1,int high1,int low2,int high2)
{
	int temp1 = low1;
	int temp2 = low2;
	int bindex = low1;
	//int length = 
	if(high1==low1&& high1 == low2 && low2 == high2)
	return;
/*	if(a[high1]<a[low2])
	{
		int bindex2 = low2;
		while(temp1<=high1&&temp2<=high2)
		{
			b[bindex++] = a[temp1++];
			b[bindex2++] = a[temp2++]; 
		}
	}
	else
	if(a[high2]<a[low1])
	{
		int bindex2 = low2;
		while(temp1<=high1&&temp2<=high2)
		{
			b[bindex++] = a[temp2++];
			b[bindex2++] = a[temp1++]; 
		}
	}
	else
/*	if ( low1 == low2 )
// copy in rest of right array
	while (  <= right )
	combined[ combinedIndex++ ] = data[ rightIndex++ ];*/
	while(temp1<=high1 && temp2<=high2)
	{
		if(a[temp1]<=a[temp2])
		{
			b[bindex++] = a[temp1++];
		}
		if(a[temp1]>a[temp2])
		{
			b[bindex++] = a[temp2++];
		}
	}
	while(temp1<=high1)
	{
		b[bindex++] = a[temp1++];
	}
	while(temp2<=high2)
	{
		b[bindex++] = a[temp2++];
	}
	for(int i = low1;i<=high2;i++)
	{
		a[i] = b[i];
	}
/*	while(temp1<=high1 && temp2<=high2)
	{
		if(a[temp1]>a[temp2])
		{
			b[bindex++] = a[temp2++];
			//temp2++;bindex++;
		}
		else
		{
			b[bindex++] =  a[temp1];
			temp1++;bindex++;
		}
	}*/
}

void merge_sort(int *a,int high1,int low1)
{
	int high,low,middle;
	high = high1;
	low = low1;
	middle = (high+low)/2;
	if(high>=low+1)
	{
		merge_sort(a,middle,low);
		merge_sort(a,high,middle+1);
	}
	merge(a,low,middle,middle+1,high);
}
int main()
{
	cout<<"enter the length of the matrix"<<endl;
	cin>>length;
	int *a = new int[length];
	for(int i = 0 ;i<length;i++)
	{
		cin>>a[i];
	}
	merge_sort(a,length-1,0);
	//a = b;
	for(int i = 0;i<length;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
