#include <iostream>

using namespace std;

int main()
{
	int x=0, y=0, z=0, l=0, m=0, n=0;
	int sum = 0;
	
	cout << "Enter the values of x, y, z: " << endl;
	cin >> x >> y >> z;
	
	cout << "Enter the values of l, m, n: " << endl;
	cin >> l >> m >> n;
	
	int a[3] = {x, y, z}, b[3] = {l, m, n};
	
	for(int i = 0; i < 3; i++)
	{
		sum += a[i]*b[i];
	}
	
	cout << "The dot product of arrays a[] and b[] is: " << sum << endl;
	
	return 0;
}
