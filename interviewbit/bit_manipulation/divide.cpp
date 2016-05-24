#include <iostream>
#include <cmath>
using namespace std;
int divide(int, int);
int main() {
	int a, b;
	cin >> a >> b;
	cout << divide(a, b) << endl;
}
int divide(int dividend, int divisor) {
	// Handle special cases
    if (divisor == 0)
		return INT_MAX;
    if (divisor == -1 && dividend == INT_MIN)
        return INT_MAX;
    // Get positive values
    long pDividend = abs((long)dividend), pDivisor = abs((long)divisor);
    int result = 0, numShift;
    while (pDividend >= pDivisor) {
        // Calculate number of left shifts
        numShift = 0;
        while (pDividend >= (pDivisor << numShift))
            numShift++;
        // Dividend minus the largest shifted divisor
        result += 1 << (numShift-1);
        pDividend -= (pDivisor << (numShift-1));
    }
    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
        return result;
    else
        return -result;
}
