#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector <int> &, int);
int main() {
	int n, value, i;
	cin >> n;
	vector <int> a (n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cin >> value;
	n = removeElement(a, value);
	cout << n << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
int removeElement(vector <int> &a, int value) {
	int count = 0, i, n = a.size();
    for (i = 0; i < n; i++) {
		if (a[i] == value) // find one, skip
			count++;
		else if (count > 0) // copy over
			a[i-count] = a[i];
   	}
	return n - count;
}
