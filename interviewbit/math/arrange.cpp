#include <iostream>
#include <vector>
using namespace std;
void arrange(vector <int> &);
int main() {
	int n, value, i;
	cin >> n;
	vector <int> a;
	for (i = 0; i < n; i++) {
		cin >> value;
		a.push_back(value);
	}
	arrange(a);
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
void arrange(vector <int> &a) {
	int n = a.size();
	for (int i = 0; i < n; i++)
		a[i] += (a[a[i]] % n) * n;
	for (int i = 0; i < n; i++)
		a[i] /= n;
}
