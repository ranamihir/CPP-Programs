#include <iostream>
#include <iomanip>
using namespace std;
const int size = 3;
int main(){
	int a[size][size], i, j;
	for(int i = 0 ; i < size; i++ )
		for(int j = 0; j < size; j++){
			cout << "Enter element no. a["<< i+1<<"]["<<j+1<<"]" << endl;
			cin >> a[i][j];
		}
	for(int i = 0; i < 3; i++){
		cout << endl << "|   ";
		for(int j = 0; j < 3; j++)
			cout << a[i][j] << setw(5);
		cout << "   |";
	}
	return 0;
}

