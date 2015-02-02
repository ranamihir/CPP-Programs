#include <iostream>
using namespace std;
void display(int);
int main(){
	int n;
	cout << "Enter the number of rows desired: " << endl;
	cin >> n;
	display(n);
	return 0;
}
void display(int n){
	if(n & 1){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < i; j++)
				cout << " ";
			for(int j = n-i; j >= 1; j--)
				cout << "* ";
			cout << endl;
		}
	}
	else{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < i; j++)
				cout << " ";
			for(int j = 0; j < n-i; j++)
				cout << "* ";
			cout << endl;
		}
	}
}
