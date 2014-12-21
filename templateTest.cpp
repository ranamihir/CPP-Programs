#include<iostream>
using namespace std;
template <class T>
class hero
{
	public:
		T add(T a,T b);
		T multi(T a,T b);
};
template <class T>
T hero<T>:: add(T a,T b)
{
	return a+b;
}
template <class T>
T hero<T>:: multi(T a,T b)
{
	return a*b;
}
int main()
{
	hero<int> obj1;
	hero<double> obj2;
	hero<float> obj3;
	cout<<obj1.add(5,4)<<endl;
	cout<<obj2.multi(4.4,6)<<endl;
	cout<<obj1.multi(3,6.1)<<endl;
}
