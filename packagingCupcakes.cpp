#include <iostream>

using namespace std;

void selectionSort(int [], int);
int maxElement(int [], int);

int main()
{
	int t, n;
	
	cin >> t;
	
	for(int j = 0; j < t; j++)
	{
		cin >> n;
		
		int a = 1, b = 1;
		
		int s = 0;
		
		for(a = 1; a <= n; a++)
		{
			for(b = 1; b <= n; b++)
			{
				if((n - a*b) >= 0)
					s++;
			}
		}
		
		int i = 0;
		int *A = new int [s];
		int *r = new int [s];
		
		for(a = 1; a <= n; a++)
		{
			for(b = 1; b <= n; b++)
			{
				if((n - a*b) >= 0)
					{
						A[i] = a;
						r[i] = (n - a*b);
						i++;
					}
			}
		}
		
		int rMax = maxElement(r, s);
		cout << rMax << endl;
		
		delete [] A;
		delete [] r;
		
	}
	
	return 0;
}

int maxElement(int a[], int n)
{
	int *b = new int [n];
	selectionSort(b, n);
	
	int x = b[n-1];
	
	delete [] b;
	
	return x;
}

void selectionSort(int a[], int size)
{
     int j, i, min, temp, min_pos;
     for(i = 0; i < size; i++)
     {
     	min = a[i];
        for(j = i+1 ; j < size; j++)
        {
            if(a[j] < min)
            {
            	min = a[j];
            	min_pos = j;
        	}
        }
        temp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = temp;
     }
}
