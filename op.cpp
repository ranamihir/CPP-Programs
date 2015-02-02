#include <iostream>

using namespace std;

int main()
{

	int a=0, b=0, c=0;

	cout << "Enter the values of a, b and c : " << endl;
	cin >> a >> b >> c;
	
	int op = a/b*c;		// Check order of precedance of opererators
	
	cout << op;
	
	return 0;
	
}
