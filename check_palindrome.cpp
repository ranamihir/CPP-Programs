// To check if a number is a palindrome or not

#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	int x=0, a=0, b=0, c=0, d=0;

	cout << "Enter a 3-digit positive integer: " << endl;
	cin >> x;
	
	d = x;
	a = x%10;
	x = x/10;
	b = x%10;
	x = x/10;
	c = x%10;
	
	if (100*a + 10*b + c == d)
		cout << "The given number is a palindrome." << endl;
		
	else
		cout << "The given number is not a palindrome." << endl;
		
	return 0;
}
