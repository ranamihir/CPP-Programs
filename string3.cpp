#include <iostream>
#include <string>

using namespace std;

int main()
{
	string x, y;
	
	cout << "String x: " << endl;
	cin >> x;
	cout << x << endl;
	
	cout << "String y: " << endl;
	getline(cin, y);
	cout << y << endl;
	
	return 0;
}
