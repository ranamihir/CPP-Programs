#include <iostream>
#include <vector>
using namespace std;
vector <vector <int> > diagonal(vector <vector <int> > &);
int main() {
  int n, i, j, value;
  cin >> n;
  vector <vector <int> > a, result;
  a.resize(n);
  for (i = 0; i < n; i++) {
  	a[i].resize(n);
  	for (j = 0; j < n; j++)
  		cin >> a[i][j];
  }
  result = diagonal(a);
  for (i = 0; i < result.size(); i++) {
  	for (j = 0; j < result[i].size(); j++)
  		cout << result[i][j] << " ";
  	cout << endl;
  }
}
vector <vector <int> > diagonal(vector <vector <int> > &a) {
	int n = a.size(), i, j;
	vector <vector <int> > result;
	vector <int> sub_result;
  	for (i = 0; i < n; i++) {
  		sub_result.clear();
  		for (j = i; j >= 0; j--) {
  			sub_result.push_back(a[i-j][j]);
  		}
  		result.push_back(sub_result);
  	}
  	for (i = 1; i < n; i++) {
  		sub_result.clear();
  		for (j = n-1; j >= i; j--) {
  			sub_result.push_back(a[n-1+i-j][j]);
  		}
  		result.push_back(sub_result);
  	}
  	return result;
}
