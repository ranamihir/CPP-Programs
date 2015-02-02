#include <iostream>
#include <fstream>
using namespace std;
long long sortAndCount(long *, long, long);
long mergeAndCountSplitInv(long *, long, long, long);
int main(){
	ifstream myfile("IntegerArray.txt");
	long i = 0, n = 100000;
	long *a = new long[n];
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
long mergeAndCountSplitInv(long *a, long start, long mid, long end){
	long i = start, j = mid, k = 0, count = 0;
	long *c = new long[end-start+1];
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
long long sortAndCount(long *a, long start, long end){
	if(start == end)
		return 0;
	long mid = (start+end)/2;
	long x = sortAndCount(a, start, mid);
	long y = sortAndCount(a, mid+1, end);
	long z = mergeAndCountSplitInv(a, start, mid+1, end);
	return x+y+z;
}
