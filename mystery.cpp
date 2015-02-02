// What does this program do?

#include <iostream>

using namespace std;

int mystery(int, int);

int main()
{
	int a,b;
	
	cout << "Enter any two poisitive integers: " << endl;
	cin >> a >> b;
	
	cout << "The result is: " << mystery(a,b) << endl;
	
	return 0;
}

int mystery(int a, int b)
{	
	int c = 0;
	if (b > 0)
	{
		if (b == 1)
			return a;
		
		else
			return a + mystery(a, b-1);
	}
	
	else if (b == 0)
		return 0;
	
	else
	{
		c = -b;
		
		if (c == 1)
			return -a;
			
		else
			return -(a + mystery(a, c-1));
	}
}


// Calulates a*b
