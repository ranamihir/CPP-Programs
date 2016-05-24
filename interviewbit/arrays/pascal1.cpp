#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> getRow(int);
vector <vector <int> > generate(int);
int main() {
  int n;
  cin >> n;
  vector <vector <int> > result = generate(n);
  for (int i = 0; i < result.size(); i++) {
  	for (int j = 0; j < result[i].size(); j++)
    	cout << result[i][j] << " ";
	cout << endl;
  }
}
vector <int> getRow(int n) {
	vector <int> result;
	int val = 1;
    for (int k = 0; k <= n; k++) {
        result.push_back(val);
        val = val * (n - k) / (k + 1);
    }
    return result;
}
vector <vector <int> > generate(int a) {
	vector <vector <int> > result;
	for (int i = 0; i < a; i++)
		result.push_back(getRow(i));
	return result;
}
