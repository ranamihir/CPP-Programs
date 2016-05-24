#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int coverPoints(vector<int> &X, vector<int> &Y);
int main() {
  int n, value;
  cin >> n;
  vector <int> X, Y;
  for(int i = 0; i < n; i++) {
    cin >> value;
    X.push_back(value);
  }
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> value;
    Y.push_back(value);
  }
  cout << coverPoints(X, Y) << endl;
}
int coverPoints(vector<int> &X, vector<int> &Y) {
  int n = X.size(), result = 0;
  for(int i = 0; i < n-1; i++){
    int dx = abs(X[i] - X[i+1]), dy = abs(Y[i] - Y[i+1]);
    result += max(dx, dy);
  }
  return result;
}
