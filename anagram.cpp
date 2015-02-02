#include <iostream>

using namespace std;

bool check(char [], char [], int n);
void swap(char, char);

int main()
{
	int n = 0;
	
	cout << "Enter the number of characters: " << endl;
	cin >> n;
	
	char *a = new char [n];
	char *b = new char [n];
	
	cout << "Enter first string: " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> *(a+i);
	}
	
	cout << "Enter second string: " << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> *(b+i);
	}
	
	if(check(a, b, n) == true)
		cout << "The given two words are anagrams." << endl;
	
	else
		cout << "The given two words are not anagrams." << endl;
		
	delete [] a;
	delete [] b;
	
	return 0;
}

bool check(char a[], char b[], int n)
{
	int count = 0;
	
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
			
			if(b[i] > b[j])
			{
				swap(b[i], b[j]);
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
			if(a[i] == b[i])
				count = 1;
	}
	
	if(count == 1)
		return true;
		
	else
		return false;
}

void swap(char a, char b)
{
	char temp = a;
	a = b;
	b = temp;
}
