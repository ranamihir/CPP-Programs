#include <iostream>
#include <vector>
using namespace std;
void rotate2D(vector <vector <int> > &);
int main() {
  int r, c, i, j, value;
  cin >> r >> c;
  vector <vector <int> > A;
  A.resize(r);
  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
    cin >> value;
    A[i].push_back(value);
    }
  }
  rotate2D(A);
  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++)
      cout << A[i][j] << " ";
    cout << endl;
  }
}
void rotate2D(vector <vector <int> > &A) {
  int i, j, n = A.size();
  vector <vector <int> > copy = A;
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
      copy[i][j] = A[n-1-j][i];
  A = copy;
}
