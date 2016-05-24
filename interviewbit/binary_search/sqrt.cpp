#include <iostream>
using namespace std;
int sqrt(int);
int main(){
	int n;
	cin >> n;
	cout << sqrt(n);
}
int sqrt(int n) {
	if(n <= 1)
		return n;
	int start = 1, end = n / 2;
	while(start <= end) {
		int mid = start + (end - start) / 2;
        if(mid == n / mid)
			return mid;
		if(mid < n / mid)
        	start = mid + 1;
		else
			end = mid - 1;
    }
    return start - 1;
}
