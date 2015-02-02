#include <iostream>
using namespace std;

int main() {

int a;
int b;
int temp;

cout << "Enter the 1st integer : ";
cin >> a;
cout << "Enter the 2nd integer : ";
cin >> b;

while( b!= 0) {

temp = a % b;
a = b;
b = temp;
}

cout << a << endl;

return 0;
}
