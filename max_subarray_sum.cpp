#include <iostream>
using namespace std;

void print_array(int *, int, int, int);
void find_max_subarray(int *, int);

int main() {
	int n = 0;
	cin >> n;
	
	int *a = new int[n];
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	find_max_subarray(a, n);
	
	delete [] a;
	
	return 0;
}

void print_array(int *a, int start, int end, int sum) {
	for(int i = start; i <= end; i++)
		cout << a[i] << " ";
	cout << endl << sum << endl;
}

void find_max_subarray(int *a, int n) {
	int current_sum = a[0], global_sum = a[0], start = 0, end = 0, temp = a[0], global_start = 0, global_end = 0, i = 0;
	
	for(i = 1; i < n; i++) {
		temp += a[i];
		if(temp >= a[i]) {
			current_sum = temp;
			end = i;
		} else {
			start = end = i;
			current_sum = temp = a[i];
		}
		if(current_sum > global_sum) {
			global_sum = current_sum;
			global_start = start;
			global_end = end;
		}
	}
	print_array(a, global_start, global_end, global_sum);
}
