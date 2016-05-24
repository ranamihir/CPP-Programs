#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void setZeroes(vector <vector <int> > &);
int main() {
  int m, n, i, j, value;
  cin >> m >> n;
  vector <vector <int> > a;
  a.resize(m);
  for(i = 0; i < m; i++) {
  	a[i].resize(n);
  	for(j = 0; j < n; j++) {
    	cin >> value;
    	a[i][j] = value;
  	}
  }
  setZeroes(a);
  for(i = 0; i < m; i++) {
  	for(j = 0; j < n; j++) {
    	cout << a[i][j] << " ";
  	}
  	cout << endl;
  }
}
void setZeroes(vector <vector <int> > &a) {
	int m = a.size(), n = a[0].size(), i, j;
	vector <int> row, col;
	row.resize(m, 1);
	col.resize(n, 1);
	for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (!a[i][j]) {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }
	for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (!row[i] || !col[j])
                a[i][j] = 0;
}
