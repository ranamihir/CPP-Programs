#include<iostream>
using namespace std;
class point
{
	int x;
	int y;
	public:
	point(int a, int b): x(a),y(b){}
	void operator <<(point P);
};
void point::operator<<(point p)
{
	cout<<"["<<x<<","<<p.y<<"]";
}
int main()
{
	point p(1,3),p1(5,5);
	p<<p1;
	return 0;
}
