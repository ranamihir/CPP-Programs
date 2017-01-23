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

int partition(int *a, int left, int right, int pivot) {
	int leftPointer = left -1, rightPointer = right;
	
	while(1) {
		while(a[++leftPointer] < pivot) {
		}
		
		while(rightPointer > 0 && a[--rightPointer] > pivot) {
      	}

      	if(leftPointer >= rightPointer) {
	  		break;
      	} else {
		  	swap(a, leftPointer, rightPointer);
      	}
   }
   
   swap(a, leftPointer, right);
   return leftPointer;
}

void quickSort(int *a, int left, int right) {
	if(right-left <= 0) {
		return;   
   	} else {
	   int pivot = a[right];
	   int partitionPoint = partition(a, left, right, pivot);
       quickSort(a, left, partitionPoint-1);
       quickSort(a, partitionPoint+1, right);
	}
}
