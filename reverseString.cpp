#include <iostream>

using namespace std;

int main()
{
	string a;
	
	cin >> a;
	
	int c = string(a).length();
	
	string b = a;
	
	for(int i = 0; i < c/2; i++)
	{
		char temp = b[i];
		b[i] = b[c-i-1];
		b[c-i-1] = temp;
	}
	
	cout << b;
	
	return 0;
}
