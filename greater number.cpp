#include <iostream>

using namespace std;

int main()

{
	
	int num1;
	int num2;
	int nn;
	nn = -num1;
	
	cout << "Enter the two numbers to compare: " << endl;
	cin >> num1 >> num2;
	
	if (num1 > 0, num2 > 0)
	{
	
		if (num1 >= num2)
		cout << "The greater number of the two numbers entered is: " << num1 << endl;
	
		else if (num1 < num2)
		cout << "The greater number of the two numbers entered is: " << num2 << endl;
	
	}
	
	else if (num1 < 0, num2 > 0)
	
	{
		if (nn >= num2)
		cout << "The greater number of the two numbers in magnitude is: " << num1 << endl;
	
		else if (nn < num2)
		cout << "The greater number of the two numbers in magnitude is: " << num2 << endl;	
	}
		return 0;
	
}
