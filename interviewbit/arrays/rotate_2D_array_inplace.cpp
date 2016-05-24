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
  int i, j, n = A.size(), temp1, temp2, temp3, temp4;
  bool **isSwapped = new bool *[n];
  for (i = 0; i < n; i++){
    isSwapped[i] = new bool [n];
    for (j = 0; j < n; j++)
      isSwapped[i][j] = false;
  }
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if (!isSwapped[i][j]){
        temp1 = A[i][j]; temp2 = A[n-1-j][i]; temp3 = A[n-1-i][n-1-j]; temp4 = A[j][n-1-i];
        isSwapped[i][j] = isSwapped[n-1-j][i] = isSwapped[n-1-i][n-1-j] = isSwapped[j][n-1-i] = true;
        A[i][j] = temp2; A[n-1-j][i] = temp3; A[n-1-i][n-1-j] = temp4; A[j][n-1-i] = temp1;
      }
    }
  }
  for (i = 0; i < n; i++)
    delete [] isSwapped[i];
  delete [] isSwapped;
}
