#include <iostream>
using namespace std;
/*int main()
{
	int *b1 = new int[3];
//	int *b2 = new int[3];
	int b2[2];
	b2[0] = 1;
	for(int i =0;i<3;i++)
	{
		b1[i] = i;
	}
//	b2[0] = 0;
	cout<<b2[2];
}*/
template <class T>
class stTym
{
	public:
		T num1;
		//T num2;
	public:
		void add(T a,T b)
		{
			num1 = a+b;
		}
		T sum()
		{
			return num1;
		}
};
int main()
{
	stTym<int> obj ;
	obj.add(4,5);
	cout<<obj.sum();
	return 0;
}
