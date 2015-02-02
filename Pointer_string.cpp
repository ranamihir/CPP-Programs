#include <iostream>

using namespace std;

int main()
{
	char name[] = "POINTER";
	
	cout << name << endl;
	
	char *cp;
	
	for(cp = name; *cp != '\0'; cp++)
		cout << "..." << *cp;

	return 0;
}
