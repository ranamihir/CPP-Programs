#include <iostream>
#include <stack>
using namespace std;
int isValid(string s) {
    stack<char> a;
    int n  = s.length();
    for (int i = 0; i < n; i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            a.push(s[i]);
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if (a.empty() || ((int)s[i] - (int)a.top() != 1 &&  (int)s[i] - (int)a.top() != 2)){
                return false;}
            else
                a.pop();
        }
    }
    return a.empty();
}

int main() {
	string s;
	cin >> s;
	cout << isValid(s);
}
