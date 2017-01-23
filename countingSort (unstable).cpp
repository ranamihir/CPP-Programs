#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(int *, int);

int main() {
	int n, i = 0;
	cin >> n;
	int *a = new int[n];
	for(i = 0; i < n; i++)
		cin >> a[i];
	countingSort(a, n);
	for(i = 0; i < n; i++)
		cout << a[i] << " ";
	delete [] a;
	return 0;
}

void countingSort(int *a, int n) {
	int *low = min_element(a, a+n), *high = max_element(a, a+n);
	int length = *high-*low+1,  i = 0, j = 0, k = 0;
	int *c = new int[length];
	
	for(i = 0; i < length; i++)
		c[i] = 0;
	for(i = 0; i < n; i++)
		c[a[i]-*low]++;
	
	for(i = 0; i < length; i++) {
		for(j = 0; j < c[i]; j++) {
			a[k] = i+*low;
			k++;
		}
	}
	
	delete [] c, low, high;
}
