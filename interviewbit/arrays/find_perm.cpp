#include <iostream>
#include <vector>
using namespace std;
vector<int> findPerm(const string, int);
int main() {
  int n, i, value;
  cin >> n;
  string s = "";
  cin >> s;
  vector<int> a = findPerm(s, n);
  for(i = 0; i < n; i++)
      cout << a[i] << " ";
    cout << endl;
}
vector<int> findPerm(const string s, int n) {
	vector<int> a (n);
    int l = 1, r = n, i = 0;
    while(i < n && l < r) {
    	if(s[i] == 'D')
    		a[i] = r--;
		else
    		a[i] = l++;
		i++;
	}
	a[n-1] = l;
	return a;
}
