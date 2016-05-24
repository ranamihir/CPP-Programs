#include <iostream>
#include <algorithm>
using namespace std;
bool notOne(string);
bool isEven(string);
string Divide(string, int);
int power(string);
int main() {
	string s;
	cin >> s;
	cout << power(s) << endl;
}
bool notOne(string s) {
    int length = s.size();
    if(length > 1)
        return 1;
    if(s[0] != '1')
    	return 1;
    return 0;
}
bool isEven(string s) {
    int data = (s[s.size() - 1] - '0') & 1;
    if(data)
		return 0;
    return 1;
}
string Divide(string s, int data) {
    reverse(s.begin(), s.end());
    long long base = 10, curr;
    int val;
    string temp = "";
    for(int i = (int)s.size() - 1, rem = 0; i >= 0; i--) {
        curr = (s[i] - '0') + rem * base;
        val = curr / data;
        rem = curr % data;
        temp += (val + '0');
    }
    while(temp.size() && !(temp[0] - '0'))
            temp.erase(temp.begin());
    return temp;
}
int power(string s) {  
    int length = s.size();
    if(length == 1) {
        if(s[0] == '2' || s[0] == '4' || s[0] == '8')
            return 1;
        return 0;
    }
	else {
		while(notOne(s) && isEven(s)) {
            s = Divide(s, 2);
            if(s.size() == 1 &&  s[0] == '1')
                break;
        }
        if(notOne(s))
            return 0;
        return 1;
    }
}
