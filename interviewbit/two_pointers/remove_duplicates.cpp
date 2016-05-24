#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector <int> &);
int main() {
	int n, i;
	cin >> n;
	vector <int> a (n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cout << removeDuplicates(a) << endl;
	for (i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}
int removeDuplicates(vector <int> &a) {
	int n = a.size(), i;
	vector <int> temp;
	temp.push_back(a[0]);
	for(i = 1; i < n; i++) {
		while (a[i] == temp[temp.size()-1])
			i++;
		if (i < n)
			temp.push_back(a[i]);
	}
	int m = temp.size();
	a.resize(m);
	a = temp;
	return m;
}
