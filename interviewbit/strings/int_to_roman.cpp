#include <iostream>
using namespace std;
string intToRoman(int);
int main() {
	int n;
	cin >> n;
	cout << intToRoman(n) << endl;
}
string intToRoman(int n) {
	char symbol[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
  	string roman;
  	int scale = 1000, digit;
  	for(int i = 6; i >= 0; i -= 2) {
    	digit = n/scale;  
    	if (digit != 0) {        
      		if (digit <= 3)
        		roman.append(digit, symbol[i]);
      		else if (digit == 4) {
        		roman.append(1, symbol[i]);  
        		roman.append(1, symbol[i+1]);  
      		}
      		else if (digit == 5)
        		roman.append(1, symbol[i+1]);
      		else if (digit <= 8) {
        		roman.append(1, symbol[i+1]);
        		roman.append(digit-5, symbol[i]);
      		}
      		else if (digit == 9) {
        		roman.append(1, symbol[i]);  
        		roman.append(1, symbol[i+2]);  
      		}
    	}
    	n %= scale;
    	scale /= 10;
	}
	return roman;  
}
