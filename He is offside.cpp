#include <iostream>
#include <algorithm>
using namespace std;
void isOffside(int [], int, int [], int); 
int main(){
	int m , n;
	while(1){
		cin >> m >> n;
		if(m == 0 && n == 0)
			break;
		int *a = new int[m];
		int *b = new int[n];
		for(int i = 0; i < m; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
			cin >> b[i];
		isOffside(a, m, b, n);
		delete []a;
		delete []b;
	}
	return 0;
}
void isOffside(int a[], int m, int b[], int n){
	sort(a, a+m);
	sort(b, b+n);
	if(a[0] < b[1])
		cout << "Y\n";
	else
		cout << "N\n";
}
