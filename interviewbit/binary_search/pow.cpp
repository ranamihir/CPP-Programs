#include <iostream>
using namespace std;
int pow(int, int, int);
int main(){
	int x, n, d;
	cin >> x >> n >> d;
	cout << pow(x, n, d);
}
int pow(int x, int n, int d) {
    if (!n)
		return 1 % d;
    long long answer = 1, base = x;
    while (n > 0) {
        // We need (base ^ n) % d.
        // Now there are 2 cases.
        // 1) n is even. Then we can make base = base^2 and n = n / 2.
        // 2) n is odd. So we need base * base^(n-1)
        if (n & 1) {
            answer = ((answer % d) * (base % d)) % d;
            n--;
        }
		else {
            base = ((base % d) * (base % d)) % d;
            n /= 2;
        }
    }
    if (answer < 0)
		answer = (answer + d) % d;
    return answer;
}
