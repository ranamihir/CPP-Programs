// To create a 4-function calculator
#include <iostream>
#include <cmath>
using namespace std;
double addition(double x, double y){
	double sum = x + y;
	return sum;
}

double subtraction (double x, double y){
	double difference = x - y;
	return difference;
}
double multiplication (double x, double y){
	double product = x*y;
	return product;
}
double division (double x, double y){
	double quotient = x/y;
	return quotient;
}
int main(){
	double a=0, b=0;
	char op;
	char choice;
	cout << "This is a 4-function calculator to calculate the sum(+), difference(-), \nproduct(*) or quotient(/) of any two given numbers." << endl;
	do {
		cout << "Enter any two numbers: " << endl;
		cin >> a >> b;
		cout << "Enter the desired operation: " << endl;
		cin >> op;
		switch (op){
			case '+': 	{
							cout << "The sum is : " << addition(a,b) << endl;
							break;
						}
			case '-':	{
							cout << "The difference is: " << subtraction(a,b) << endl;
							break;
						}
			case '*':	{
							cout << "The product is: " << multiplication(a,b) << endl;
							break;
						}
			case '/':	{
							cout << "The quotient is: " << division(a,b) << endl;
							break;
						}
			}
			cout << "Would you like to carry out another calculation? (y/n) " << endl;
			cin >> choice;
		}
		while (choice == 'y');
	return 0;
}
