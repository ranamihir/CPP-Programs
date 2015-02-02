#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int x = 0;
	
	srand(time (NULL));
	
	x = rand() % 100 + 1;
	
	cout << x << endl;


	return 0;	
}
