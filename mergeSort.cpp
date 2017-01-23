#include <iostream>
using namespace std;

void mergeSort(int *, int);
void merge(int *, int, int *, int, int *);

int main() {
	int n, i = 0;
	cin >> n;
	int *a = new int[n];
	for(i = 0; i < n; i++)
		cin >> a[i];
	mergeSort(a, n);
	for(i = 0; i < n; i++)
		cout << a[i] << " ";
	delete [] a;
	return 0;
}

void mergeSort(int *a, int n) {
	if(n < 2)
		return;
	int mid = n/2, i = 0;
	int *left = new int[mid];
	int *right = new int[n-mid];
	
	for(i = 0; i < mid; i++)
		left[i] = a[i];
	for(i = 0; i < n-mid; i++)
		right[i] = a[i+mid];

	mergeSort(left, mid);
	mergeSort(right, n-mid);
	merge(left, mid, right, n-mid, a);
	
	delete [] left;
	delete [] right;
}
void merge(int *l, int nl, int *r, int nr, int *a) {
	int i = 0, j = 0, k = 0;
	while(i < nl && j < nr) {
		if(l[i] < r[j]) {
			a[k] = l[i];
			i++;
		} else {
			a[k] = r[j];
			j++;
		}
		k++;
	}
	while(i < nl) {
		a[k] = l[i];
		i++;
		k++;
	}
	while(j < nr) {
		a[k] = r[j];
		j++;
		k++;
	}
}
