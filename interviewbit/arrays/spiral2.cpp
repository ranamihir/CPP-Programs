#include <iostream>
#include <vector>
using namespace std;
vector <vector <int> > generateMatrix(int);
int main() {
  int n;
  cin >> n;
  vector <vector <int> > result = generateMatrix(n);
  for (int i = 0; i < n; i++) {
  	for (int j = 0; j < n; j++)
  		cout  << result[i][j] << " ";
	  cout << endl;
  }
}
vector <vector <int> > generateMatrix(int n) {
  vector <vector <int> > a;
  a.resize(n);
  for (int i = 0; i < n; i++)
  	a[i].resize(n, 0);
  int count = 1, dir = 0, l = 0, r = n-1, t = 0, b = n-1;
  while (t <= b && l <= r) {
  	// Left to right
  	if (dir == 0) {
		for (int i = l; i <= r; i++) {
			a[t][i] = count;
			count++;
		}
		t++;
	}
	// Top to bottom
	else if (dir == 1) {
		for (int i = t; i <= b; i++) {
			a[i][r] = count;
			count++;
		}
		r--;
  	}
	// Right to left
	else if (dir == 2) {
		for (int i = r; i >= l; i--) {
			a[b][i] = count;
			count++;
		}
		b--;
	}
	// Bottom to top
	else if (dir == 3) {
		for (int i = b; i >= t; i--) {
			a[i][l] = count;
			count++;
  		}
  		l++;
	}
	dir = (dir+1) % 4;
  }
  return a;
}
