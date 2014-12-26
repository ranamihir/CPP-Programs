#include <iostream>
using namespace std;
int numOfRect(int);
int main(){
	int n;
	cin >> n;
	cout << numOfRect(n);
	return 0;
}
int numOfRect(int n){
	int count = 0;
	for(int i = 1; i <= n; i++)
		for(int j = i; j <= n; j++)
			if(i*j <= n)
				count++;
	return count;
}
