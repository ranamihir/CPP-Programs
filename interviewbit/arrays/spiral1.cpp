#include <iostream>
#include <vector>
using namespace std;
vector <int> spiralOrder(const vector <vector <int> > &);
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
  vector <int> result = spiralOrder(A);
  for(i = 0; i < result.size(); i++)
      cout << result[i] << " ";
  cout << endl;
}
vector <int> spiralOrder(const vector <vector <int> > &a) {
  vector<int> result;
  int t = 0, b = a.size()-1, l = 0, r = a[0].size() - 1, dir = 0;
  while(t <= b && l <= r) {
    if (dir == 0) {
      for (int i = l; i <= r; i++)
        result.push_back(a[t][i]);
      t++;
    }
    if (dir == 1) {
      for (int i = t; i <= b; i++)
        result.push_back(a[i][r]);
      r--;
    }
    else if (dir == 2) {
      for (int i = r; i >= l; i--)
        result.push_back(a[b][i]);
      b--;
    }
    else if (dir == 3) {
      for (int i = b; i >= t; i--)
        result.push_back(a[i][l]);
      l++;
    }
    dir = (dir+1) % 4;
  }
  return result;
}
