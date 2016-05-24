#include <iostream>
#include <cmath>
using namespace std;
float newtonRaphson(int, int);
bool isPower(int);
int main() {
	int n;
	cin >> n;
	cout << isPower(n) << endl;
}
float newtonRaphson(int k, int n) {
	float x = n;
	float u = x, s = n+1, t;
	while (u < s) {
	    s = u;
	    t = (k-1) * s + n / pow(s, k-1);
	    u = t / k;
	}
	return s;
}
bool isPower(int n) {
    if (n == 1)
        return true;
    else if (n <= 3)
        return false;
    float temp;
    for (int i = 2; i < 33; i++) {
        temp = newtonRaphson(i, n);
        if (temp == int(temp))
            return true;
    }
    return false;
}
