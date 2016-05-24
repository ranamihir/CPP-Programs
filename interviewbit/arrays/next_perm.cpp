#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void swap(vector <int> &, int, int);
void nextPermutation(vector <int> &);
int main() {
  int n, i, value;
  cin >> n;
  vector <int> a;
  a.resize(n);
  for(i = 0; i < n; i++) {
    cin >> value;
    a[i] = value;
  }
  nextPermutation(a);
  for(i = 0; i < n; i++)
      cout << a[i] << " ";
    cout << endl;
}
void swap(vector <int> &a, int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
		
}
void nextPermutation(vector <int> &a) {
    int n = a.size(), k = -1, l = 0, i;
	for (i = 0; i < n-1; i++)
		if (a[i] < a[i+1])
			k = i;
	if (k == -1) {
		sort(a.begin(), a.end());
		return;
	}
	for (i = k+1; i < n; i++)
		if (a[k] < a[i])
			l = i;
	swap(a, k, l);
	reverse(a.begin()+k+1, a.end());
}
