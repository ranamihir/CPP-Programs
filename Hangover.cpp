#include <iostream>
using namespace std;
float values[275];
void calcValues(){
	for(int i = 0; i < 275; i++)
		values[i] = 1.00/(i+2.00);
}
float hangLength(int);
int minCards(float);
int main(){
	calcValues();
	float c = 1.00;
	for(int i = 0; c != 0.00; i++){
		cin >> c;
		if(c != 0.00)
			cout << minCards(c) << " card(s)" << endl;
	}
	return 0;
}
float hangLength(int n){
	float s = 0.00;
	for(int i = 0; i < n; i++)
		s += values[i];
	return s;
}
int minCards(float c){
	int n = 0;
	while(hangLength(n) < c){
		n++;
	};
	return n;
}
