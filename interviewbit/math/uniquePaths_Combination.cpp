#include <iostream>
using namespace std;
unsigned nChoosek(int, int);
int uniquePaths(int, int);
int main() {
	int a, b;
	cin >> a >> b;
	cout << uniquePaths(a, b) << endl;
}
unsigned nChoosek(int n, int k) {
    if (k > n)
		return 0;
    if (k * 2 > n)
		k = n-k;
    if (k == 0)
		return 1;
    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}
int uniquePaths(int a, int b) {
    return nChoosek(a+b-2, a-1);
}
