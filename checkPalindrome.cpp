#include <iostream>

using namespace std;

bool checkPalindrome(string a, const int n)
{
	bool check = true;
	
	string b = a;
	
	
	for(int i = 0; i < n/2; i++)
	{
		char temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] != b[i])
		{
			check = false;
			break;
		}
	}
	
	return check;
}

int main()
{
	string a;
	
	cin >> a;
	
	const int n = string(a).length();
	
	bool check = checkPalindrome(a, n);
	
	if(check == true)
		cout << "Yes";
	else
		cout << "No";
		
	return 0;
}
