#include <iostream>

using namespace std;

int main()
{
	const char *suit[4] = {"Hearts", "Spades", "Clubs", "Diamonds"};
	
	cout << suit[0] << endl;		// Hearts
	cout << suit[0][1] << endl;	    // e
	cout << *suit[0] << endl;		// H
	cout << *suit << endl;			// Hearts 
	cout << &suit[0] << endl;		// Some address
	cout << &suit << endl;			// Same address as above
	cout << suit << endl;			// Same address as above
	cout << &suit[0][0] << endl;	// Hearts
	suit[0]++;
	cout << *suit[0] << endl;		// e
	
	
	return 0;
}
