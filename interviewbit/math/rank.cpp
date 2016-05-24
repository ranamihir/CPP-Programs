#include <iostream>
#include <algorithm>
using namespace std;
int findSmallerInRight(string, int, int);
int findRank(string);
int main() {
	string s;
	cin >> s;
	cout << findRank(s) << endl;
}
int fac(int n) {
    return (n <= 1) ? 1 : n * fac(n-1);
}
int findSmallerInRight(string s, int low, int high) {
    int countRight = 0, i;
    for (i = low+1; i <= high; i++)
        if (s[i] < s[low])
            countRight++;
    return countRight;
}
int findRank(string s) {
	int len = s.length(), rank = 1, countRight, i;
    int mul = fac(len);
    for (i = 0; i < len; i++) {
        mul /= len - i;
        // count number of chars smaller than str[i]
        // fron str[i+1] to str[len-1]
        countRight = findSmallerInRight(s, i, len-1);
        rank += countRight * mul;
    }
    return rank % 1000003;
}
