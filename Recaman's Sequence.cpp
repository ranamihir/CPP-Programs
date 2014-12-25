#include <iostream>
using namespace std;
long long a[500005];
bool b[10000000] = {false};
void calcValues();
int main(){
	calcValues();
	int k = 0;
	cin >> k;
	while(k != -1){
		cout << a[k] << endl;
		cin >> k;
	}
	return 0;
}
void calcValues(){
	long long i, temp;
	a[0] = 0;
	b[0] = 1;
	for(i = 1; i < 500005; i++){
		temp = a[i-1]-i;
		if(temp > 0 && b[temp] == false){
			a[i] = temp;
			b[temp] = true;
		}
		else{
			a[i] = a[i-1]+i;
			b[a[i-1]+i] = true;
		}
	}
}
