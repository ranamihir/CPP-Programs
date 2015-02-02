#include <iostream>

using namespace std;

int main()
{
	int x = 2;
	
	if(x == 1)
		cout << x;
		
	else
		throw invalid_argument("X must be 1!");
		
	return 0;
}
