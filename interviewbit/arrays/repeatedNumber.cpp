#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int repeatedNumber(const vector <int> &);
int main() {
  int n, value, i;
  cin >> n;
  vector <int> a;
  for (i = 0; i < n; i++) {
  	cin >> value;
  	a.push_back(value);
  }
  cout << repeatedNumber(a) << endl;
}
int repeatedNumber(const vector <int> &a) {
	int n = a.size();
	for(int i = sqrt(n); i < n; i += sqrt(n)) {
		
	}
}
