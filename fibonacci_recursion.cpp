// Fibonacci using recursion

#include <iostream>

using namespace std;

int fibonacci(int n)
{
	if (n==0 || n == 1)
		return n;
	
	else
		return fibonacci(n-1) + fibonacci(n-2);
}
	
int main()
{
	int n=0;
	
	cout << "Enter the number of terms upto which the Fibonacci series is to be displayed: " << endl;
	cin >> n;
	
	for(int i=1; i<=n; i++)
	{
		cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;;
	}
	
	return 0;
}
