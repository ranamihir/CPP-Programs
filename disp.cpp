#include <iostream>
using namespace std;
void disp(float a, float t, int u = 0)
{
	cout << a + t + u;
}
void disp(int u, float t, float a = 9.8)
{
	cout << a - t - u;
}

int main()
{
	float a, t;
	int u;
	cin >> a >> t >> u;
	
	disp(a,t);
	cout << endl;
	disp(u,t);
	return 0;
}
