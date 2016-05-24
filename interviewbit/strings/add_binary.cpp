#include <iostream>
using namespace std;
int makeEqualLength(string &, string &);
string addBinary(string, string);
int main() {
	string a, b;
	cin >> a >> b;
	cout << addBinary(a, b) << endl;
}
int makeEqualLength(string &str1, string &str2) {
    int len1 = str1.size(), len2 = str2.size();
    if (len1 < len2) {
        for (int i = 0 ; i < len2 - len1 ; i++)
            str1 = '0' + str1;
        return len2;
    }
    else if (len1 > len2) {
        for (int i = 0 ; i < len1 - len2 ; i++)
            str2 = '0' + str2;
    }
    return len1;
}
string addBinary(string first, string second) {
   	string result;
    int length = makeEqualLength(first, second), carry = 0, firstBit, secondBit, sum;
    for (int i = length-1 ; i >= 0 ; i--) {
        firstBit = first.at(i) - '0';
        secondBit = second.at(i) - '0';
        sum = (firstBit ^ secondBit ^ carry) + '0';
        result = (char)sum + result;
        carry = (firstBit & secondBit) | (secondBit & carry) | (firstBit & carry);
    }
    if (carry)
        result = '1' + result;
    return result;
}
