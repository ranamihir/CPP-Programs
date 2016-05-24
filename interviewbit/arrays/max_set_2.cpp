#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double maxSet(vector<int> &);
int main() {
  int n, value;
  cin >> n;
  vector <int> A;
  for(int i = 0; i < n; i++) {
    cin >> value;
    A.push_back(value);
  }
  cout << maxSet(A) << endl;
}
double maxSet(vector<int> &A) {
  vector <double> result;
  result.resize(1, 0.0);
  int size = A.size(), i, index = 0;
  for (i = 0; i < size; i++) {
    if (A[i] < 0) {
      result.resize(result.size() + 1, 0.0);
      index++;
      continue;
    }
    else
      result[index] += double(A[i]);
   }
   return *max_element(result.begin(), result.end());
}
