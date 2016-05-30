#include <iostream>
#include <stack>
using namespace std;
int braces(string a) {
    stack<char> s;
    int count, n = a.length();
    for(int i = 0; i < n; i++) {
        if(a[i] != ')')
            s.push(a[i]);
        else {
            count = 0;
            while(s.size() && s.top() != '(') {
                s.pop();
                count++;
            }
            s.pop();
            if(count < 2)
                return 1;
        }
    }
    return 0;
}
int main() {
	string a;
	cin >> a;
	cout << braces(a);	
}
