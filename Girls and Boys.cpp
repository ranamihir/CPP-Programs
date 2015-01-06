#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int maxConsec(int, int);
int main(){
	int a, b;
	cin >> a >> b;
	while(a != -1 && b != -1){
		cout << maxConsec(a, b) << endl;
		cin >> a >> b;
	}
	return 0;
}
int maxConsec(int a, int b){
	int s = a+b;
	b = max(a, b);
	a = s-b;
	return ceil(double(b)/(a+1));
}
