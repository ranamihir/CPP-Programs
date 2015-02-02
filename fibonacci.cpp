#include <iostream>

using namespace std;

int fibonacci(int n)
{	
	if (n==0 || n==1)
	return n;

	else
	return fibonacci(n-1) + fibonacci(n-2); 
}

int main()
{	
	int n;
	
	cout << "Enter the nunber of terms upto which the series is to be displayed: " << endl;
	cin >> n;
	
	for(int i=0; i <n; i++)
	cout << fibonacci(i) << endl;
	
	return 0;
}
