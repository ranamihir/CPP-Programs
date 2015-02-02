#include <iostream>

using namespace std;

int reverse(unsigned int n);
bool isPalindrome(unsigned int n);
int howManyPalindromes(unsigned int Nmin, unsigned int Nmax);

int main()
{
	int Nmin = 0, Nmax = 0;
	
	cout << "Enter any two positive integers: " << endl;
	cin >> Nmin >> Nmax;
	
	cout << "The number of palindromes in the range [" << Nmin << ", " << Nmax << "] is: "
		 << howManyPalindromes(Nmin, Nmax) << endl;
		 
	return 0;
}

int reverse(unsigned int n)
{
	int a = 0, s = 0;
	do
	{
		a = n%10;
		n = n/10;
		s = 10*s + a;
	} while(n != 0);
	
	return s;
}

bool isPalindrome(unsigned int n)
{
	bool check = false;
	
	if(reverse(n) == n)
		check = true;
		
	return check;
}

int howManyPalindromes(unsigned int Nmin, unsigned int Nmax)
{
	int counter = 0;
	
	for(int i = Nmin; i <= Nmax; i++)
	{
		if(isPalindrome(i) == true)
			counter++;
	}
	
	return counter;
}
