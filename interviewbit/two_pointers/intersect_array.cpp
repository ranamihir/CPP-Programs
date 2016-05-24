#include <iostream>
#include <vector>
using namespace std;
vector <int> intersect(const vector <int> &, const vector <int> &);
int main() {
	int n1, n2, i;
	cin >> n1;
	vector <int> a (n1);
	for(i = 0; i < n1; i++)
		cin >> a[i];
	cin >> n2;
	vector <int> b (n2);
	for(i = 0; i < n2; i++)
		cin >> b[i];
	vector <int> result = intersect(a, b);
	for(i = 0; i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
}
vector <int> intersect(const vector <int> &a, const vector <int> &b) {
	int n1 = a.size(), n2 = b.size(), i = 0, j = 0;
	vector <int> result;
	while (i < n1 && j < n2) {
		if (a[i] == b[j]) {
			result.push_back(a[i]);
			i++;
			j++;
		}
		else if (a[i] < b[j])
			i++;
		else
			j++;
	}
	return result;
}
