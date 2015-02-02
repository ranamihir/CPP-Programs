#include <iostream>
#include <fstream>
using namespace std;
unsigned long sortAndCount(unsigned long *, unsigned long, unsigned long);
unsigned long mergeAndCountSplitInv(unsigned long *, unsigned long, unsigned long, unsigned long);
int main(){
	ifstream myfile("IntegerArray.txt");
	unsigned long i = 0, n = 100000;
	unsigned long *a = new unsigned long[n];
	while (! myfile.eof()){
  		myfile >> a[i];
  		i++;
	}
  	myfile.close();
	cout << sortAndCount(a, 0, n-1) << endl;
	delete [] a;
	system("PAUSE");
	return 0;
}
unsigned long mergeAndCountSplitInv(unsigned long *a, unsigned long start, unsigned long mid, unsigned long end){
	unsigned long i = start, j = mid, k = 0, count = 0;
	unsigned long *c = new unsigned long[end-start+1];
	while(i < mid || j <= end){
        if (i == mid){
        	c[k] = a[j];
            j++;
        }
        else if (j > end){
        	c[k] = a[i];
            i++;
        }
        else if (a[i] <= a[j]){
        	c[k] = a[i];
            i++;
        }
        else{
            count += (mid-i);
            c[k] = a[j];
            j++;
        }
        k++;
	}
    i = start;
    while (i <= end){
        a[i] = c[i-start];
        i++;
    }
    delete [] c;
	return count;
}
unsigned long sortAndCount(unsigned long *a, unsigned long start, unsigned long end){
	if(start == end)
		return 0;
	unsigned long mid = (start+end)/2;
	unsigned long x = sortAndCount(a, start, mid);
	unsigned long y = sortAndCount(a, mid+1, end);
	unsigned long z = mergeAndCountSplitInv(a, start, mid+1, end);
	return x+y+z;
}
