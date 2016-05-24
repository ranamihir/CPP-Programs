#include <iostream>
#include <vector>
using namespace std;
vector <int> merge(vector <int>, int, vector <int>, int);
double findMedianSortedArrays(const vector <int> &, const vector <int> &);
int main() {
	int m, n, value, i;
	vector <int> a, b;
	cin >> m;
	for(i = 0; i < m; i++) {
		cin >> value;
		a.push_back(value);
	}
	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> value;
		b.push_back(value);
	}
	cout << findMedianSortedArrays(a, b);
}
vector <int> merge(vector <int> l, int nl, vector <int> r, int nr){
	vector <int> a;
	a.resize(nl+nr);
	int i = 0, j = 0, k = 0;
	while(i < nl && j < nr){
		if(l[i] < r[j]){
			a[k] = l[i];
			i++;
		}
		else{
			a[k] = r[j];
			j++;
		}
		k++;
	}
	while(i < nl){
		a[k] = l[i];
		i++;
		k++;
	}
	while(j < nr){
		a[k] = r[j];
		j++;
		k++;
	}
	return a;
}
double findMedianSortedArrays(const vector <int> &a, const vector <int> &b) {
	int m = a.size(), n = b.size();
	vector <int> result = merge(a, m, b, n);
	if ((m+n) & 1)
		return result[(m+n+1)/2 - 1];
	else {
		double first = result[(m+n)/2 - 1], second = result[(m+n)/2];
		return (first + second) / 2;
	}
}
