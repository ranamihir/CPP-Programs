#include <iostream>
#include <string>

using namespace std;

void swap(string *a, string *b)
{
	string c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	string a = "mihir", b = "aman";
	
	cout << "Before: " << endl << "A: " << a << endl << "B: " << b << endl;
	
	swap(&a, &b);
	
	cout << "After: " << endl << "A: " << a << endl << "B: " << b << endl;
	
	return 0;
	
}
