#include <iostream> 
using namespace std;

void insertionSort(int *, int n);

int main() {
	int n = 0;
	cout << "Enter length of array:" << endl;
	cin >> n;
	
	int *a = new int[n];
	
	cout << "Enter " << n << " numbers to be sorted in ascending order:" << endl;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	insertionSort(a, n);
	
	cout << "Sorted array:" << endl;
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
		
	return 0;
} 

void insertionSort(int *a, int n) {
	int i = 0, j = 0, temp = 0;
	for(i = 1; i < n; i++) {
		temp = a[i];
		j = i - 1;
		while((j > 0) && (a[j] > temp)) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}
