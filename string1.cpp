#include <iostream>

using namespace std;

int main()
{
	string a[5]={"zebra","bat","horse","dog","fox"};
	
	string temp, min;
		
	for (int i = 0; i < 4; i++)
	{
		min = a[i];
		
		for (int j = i+1; j < 5; j++)
		{
			if (a[i][1] > a[j][1])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				
				min = a[j];
			}
			
			else if(a[i][1] == a[j][1])
			{
				if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				
					min = a[j];	
				}
			}
		}
	}
	
	for(int i = 0; i < 5; i++)
	cout << a[i] << endl;
	
	return 0;
}
