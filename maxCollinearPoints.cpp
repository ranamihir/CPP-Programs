#include <iostream>
#include <algorithm>
using namespace std;
class Point{
	public:
		int x;
		int y;
		float slope(Point);
		Point(int, int);
};
Point::Point(int a, int b){
		x = a;
		y = b;
}
float Point::slope(Point a);{
			float m;
			if(x != a.x)
				m = (y-a.y)/(x-a.x);
			else
				m = null;
			return m;
		}
bool isCollinear(Point, Point, Point);
int maxCollinearPoints(Point []);
int main(){
	Point a = new Point(0, 0);
	Point b = new Point(1, 2);
	Point c = new Point(3, 4);
	cout << maxCollinearPoints(p);
	return 0;
}
bool isCollinear(Point a, Point b, Point c){
	double area = 0.5*(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y));
	if(!area)
		return true;
	else
		return false;
}
int maxCollinearPoints(Point p[]){
	int n = sizeof(p);
	for(int i = 0; i < n; i++){
		
	}
}
