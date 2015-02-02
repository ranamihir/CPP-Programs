// Selection Sort
#include <iostream>
using namespace std;
void selectionSort(int*, int);
int main(){
	int n;
	cin >> n;
	int *x = new int[n];
	for(int i = 0; i< n; i++)
	    cin >> x[i];
	selectionSort(x, n);
	for(int i = 0; i < n; i++)
	    cout << x[i] << " ";
	delete [] x;
	return 0;
}
void selectionSort(int *a, int size){
	int j, i, temp, min_pos;
    for(i = 0; i < size-1; i++){
		min_pos = i;
        for(j = i+1; j < size; j++){
            if(a[j] < a[min_pos])
            	min_pos=j;
		    }
        if(min_pos != i){
			temp = a[i];
		    a[i] = a[min_pos];
			a[min_pos] = temp;
     	}
    }
}
