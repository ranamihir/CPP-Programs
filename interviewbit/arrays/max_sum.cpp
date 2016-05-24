#include <iostream>
#include <vector>
using namespace std;
int maxSum(vector<int> &);
int main() {
  int n, value;
  cin >> n;
  vector <int> A;
  for(int i = 0; i < n; i++) {
    cin >> value;
    A.push_back(value);
  }
  cout << maxSum(A) << endl;
}
int maxSum(vector<int> &a) {
  int size = A.size(), max_so_far = A[0], i, curr_max = A[0];
  for (i = 1; i < size; i++) {
    curr_max = max(A[i], curr_max+A[i]);
    max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
