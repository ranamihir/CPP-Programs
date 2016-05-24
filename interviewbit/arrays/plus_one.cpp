#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> plusOne(vector <int> &);
int main() {
  int n, value, i;
  cin >> n;
  vector <int> a, result;
  for(i = 0; i < n; i++) {
    cin >> value;
    a.push_back(value);
  }
  result = plusOne(a);
  for(i = 0; i < result.size(); i++)
  	cout << result[i] << " ";
  cout << endl;
}
vector <int> plusOne(vector <int> &a) {
	int i = a.size()-1;
	if (a[0] == 0) {
		reverse(a.begin(), a.end());
		while(a[i] == 0 && i > 0) {
			a.pop_back();
			i--;
		}
		reverse(a.begin(), a.end());
	}
	int n = a.size();
	i = n-1;
	while(a[i] == 9 && i > -2)
		i--;
	if (i == -1) {
		a[0] = 1;
		for(int j = 1; j < n; j++)
			a[j] = 0;
		a.push_back(0);
	}
	else {
		a[i]++;
		for(int j = i+1; j < n; j++)
			a[j] = 0;
	}
	return a;
}
