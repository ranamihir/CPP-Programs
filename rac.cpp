#include<iostream>
using namespace std;
template <class T>
class rac{public:
	T a;
	rac(T f) { a = f;
	}
void add(T x,T y)
{
	T z=x+a+y;
	cout<<z;
}};
int main()
{
	rac<int> s(5);
	int a,b;
	a=2;
	b=6;
	s.add<int>(a,b);
	return 0;
}
