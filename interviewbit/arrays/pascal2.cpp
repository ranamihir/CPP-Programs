#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> getRow(int);
int main() {
  int n;
  cin >> n;
  vector <int> result = getRow(n);
  for (int i = 0; i < result.size(); i++)
    cout << result[i] << " ";
  cout << endl;
}
vector <int> getRow(int n) {
	vector <int> result;
	int val = 1;
    for (int k = 0; k <= n; k++) {
        result.push_back(val);
        val = val * (n - k) / (k + 1);
    }
    return result;
}
