#include <iostream>

using namespace std;

int numberOfDigits(int);

int main()
{
	int n;
	
	cin >> n;
	
	int c = numberOfDigits(n);
	
	int l = n;
	
	char *b = new char [c];
	
	for(int i = 0; i < c; i++)
	{
		int s = l % 10;
		l /= 10;
		
		b[c-1-i] = s;
	}
	
	for(int i = 0; i < c; i++)
		cout << int(b[i]);
	
	return 0;
}

int numberOfDigits(int n)
{
	int c = 0;
	int m = n;
	
	do{
		c++;
		m /= 10;
	} while(m != 0);
	
	return c;
}
