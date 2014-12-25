#include <iostream>
using namespace std;
void typeOfSequence(int, int, int);
int main(){
	int a1=1, a2=1, a3=1;
	while(1){
		cin >> a1 >> a2 >> a3;
		if(a1 == 0 && a2 == 0 && a3 == 0)
			break;
		typeOfSequence(a1, a2, a3);
	}
	return 0;
}
void typeOfSequence(int a1, int a2, int a3){
	if(a1+a3 == 2*a2)
		cout << "AP " << 2*a3-a2 << endl;
	else
		cout << "GP " << a3*a3/a2 << endl;
}
