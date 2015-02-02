#include <iostream>

using namespace std;

bool checkPalindrome(int);

int main()
{
	int n = 0;
	
	cin >> n;
	
	cout << checkPalindrome(n);
	
	return 0;	
}

bool checkPalindrome(int l)
{
	bool check = true;

	int c = 0;
	int m = l;
	
	do {
		m = m/10;
		c++;
	} while(m != 0);
	
	char *b = new char [c];
	
	for(int i = 0; i < c; i++)
	{
		int s = l % 10;
		l /= 10;
		
		b[c-1-i] = s;
	}
	
	char *d = new char [c];

	for(int i = 0; i < c; i++)
		d[i] = b[i];
	
	for(int i = 0; i < c/2; i++)
	{
		char temp = b[i];
		b[i] = b[c-i-1];
		b[c-i-1] = temp;
	}
	
	for(int i = 0; i < c; i++)
	{
		if(d[i] != b[i])
		{
			check = false;
			break;
		}
	}
	
	delete [] b;
	delete [] d;
	
	return check;
}

bool checkPrime(int l)
{
	bool check = true;
	
	for(int i = 2; i < l; i++)
	{
		if(l % i == 0)
		{
			check = false;
			break;
		}
	}
	
	return check;
}
