#include <iostream>

using namespace std;

int main()
{
	int numerator1, numerator2, denominator1, denominator2;
	char slash;
	
	cout << "Enter number1: " << endl;
	cin >> numerator1 >> slash >> denominator1;
	
	cout << "Enter number2: " << endl;
	cin >> numerator2 >> slash >> denominator2;
	
	int numerator = (numerator1*denominator2 + numerator2*denominator1);
	int denominator = (denominator1*denominator2);
	
	cout << "The sum is: " << numerator << "/" << denominator << endl;
	
	return 0;
}
