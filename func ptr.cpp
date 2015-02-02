#include <iostream>

using namespace std;

double square(double);
double(*)(double) option(double, double(*)(double));

int main()
{
	double (*squarePtr)(double);
	squarePtr = option(4, square);
	cout << (*squarePtr)(4) << endl;
	return 0;
}

double square(double x)
{
	return (x*x);
}

double(*)(double) option(double x, double(*ptr)(double))
{
	return (*ptr);
}
