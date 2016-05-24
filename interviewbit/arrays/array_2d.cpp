#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > performOps(vector<vector<int> > &A);
int main() {
  int m = 3, n = 4, value = 1;
  vector < vector <int> > A;
  for (int i = 0; i < m; i++) {
    A.push_back(vector <int> ());
    for (int j = 0; j < n; j++) {
      A[i].push_back(value);
      value++;
    }
  }
  vector<vector<int> > B = performOps(A);
  for (int i = 0; i < B.size(); i++)
    for (int j = 0; j < B[i].size(); j++)
      cout << B[i][j] << " ";
}
vector<vector<int> > performOps(vector<vector<int> > &A) {
    vector<vector<int> > B;
    B.resize(A.size());
    for (int i = 0; i < A.size(); i++) {
        B[i].resize(A[i].size());
        for (int j = 0; j < A[i].size(); j++) {
            B[i][A[i].size() - 1 - j] = A[i][j];
        }
    }
    return B;
}
