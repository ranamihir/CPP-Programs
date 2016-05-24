#include <iostream>
#include <vector>
using namespace std;
vector<int> rotateArray(vector<int> &A, int B);
int main() {
  int n, value, B;
  vector <int> A;
  cin >> n >> B;
  for(int i = 0; i < n; i++) {
    cin >> value;
    A.push_back(value);
  }
  vector <int> result = rotateArray(A, B);
  for(int i = 0; i < n; i++)
    cout << result[i] << " ";
  cout << endl;
}
vector<int> rotateArray(vector<int> &A, int B) {
  if (B > A.size())
    B = B % A.size();
  vector<int> ret;
  for (int i = B; i < A.size(); i++)
    ret.push_back(A[i]);
  for (int i = 0; i < B; i++)
    ret.push_back(A[i]);
  return ret;
}
