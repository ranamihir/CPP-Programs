#include <iostream>
using namespace std;

void swap(int *, int, int);
int partition(int *, int, int, int);
void quickSort(int *, int, int);

int main() {
	int n, i = 0;
	cin >> n;
	int *a = new int[n];
	for(i = 0; i < n; i++)
		cin >> a[i];
	quickSort(a, 0, n-1);
	for(i = 0; i < n; i++)
		cout << a[i] << " ";
	delete [] a;
	return 0;
}

void swap(int *a, int pos1, int pos2) {
   int temp = a[pos1];
   a[pos1] = a[pos2];
   a[pos2] = temp;
}

int partition(int *a, int left, int right) {
	int pivot = a[right], pIndex = left;
	for(int i = left; i < right; i++) {
		if(a[i] <= pivot) {
			swap(a, i, pIndex);
			pIndex++;
		}
	}
   swap(a, pIndex, right);
   return pIndex;
}

void quickSort(int *a, int left, int right) {
	if(left >= right)
		return;
   int pIndex = partition(a, left, right);
   quickSort(a, left, pIndex-1);
   quickSort(a, pIndex+1, right);
}
