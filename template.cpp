#include <iostream>
using namespace std;

template<class T>
class mypair {
	public:
		mypair(T first,T second) {
			a = first;
			b = second;
		}
		T getmax();
	private:
		T a, b;
};

template <class T>
T mypair<T>::getmax() {
	return (a > b) ? a : b;
}

template <class T>
T square(T x) {
	return x*x;
}

template <class T>
T maximum(T a, T b) {
	return (a > b) ? a : b ;
}

int main() {
	mypair<int> myints(100, 75);
	mypair<float> myfloats(12.0,2.0);
	cout << myints.getmax() << endl;
	cout << myfloats.getmax() << endl;

	int i;
	float x;
	double y;
	i = 2;
	x = 2.2;
	y = 4.5;
	cout << i << ": " << square<int>(i) << endl;
	cout << x << ": " << square<float>(x) << endl;

	cout << y << ": " << square<double>(y) << endl; 	// Explicit use of template
	cout << y << ": " << square(y) << endl; 			// Implicit use of template
	
	cout << "max(10, 15) = " << maximum(10, 15) << endl ;
	cout << "max('k', 's') = " << maximum('k', 's') << endl;
	cout << "max(10.1, 15.2) = " << maximum(10.1, 15.2) << endl ;

	return 0;
}
