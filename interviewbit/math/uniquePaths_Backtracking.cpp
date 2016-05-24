#include <iostream>
using namespace std;
int backtrack(int, int, int, int);
int uniquePaths(int, int);
int main() {
	int a, b;
	cin >> a >> b;
	cout << backtrack(1, 1, a, b) << endl;
}
int backtrack(int r, int c, int m, int n) {
  if (r == m && c == n)
    return 1;
  if (r > m || c > n)
    return 0;
  return backtrack(r+1, c, m, n) + backtrack(r, c+1, m, n);
}
int uniquePaths(int a, int b) {
    return backtrack(1, 1, a, b);
}
