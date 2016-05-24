#include <iostream>
#include <stack>
using namespace std;
int main() {
	string a;
	cin >> a;
	stack<char> s;
    int n = a.length();
    for(int i = 0; i < n; i++)
        s.push(a[i]);
    for(int i = 0; i < n; i++) {
        a[i] = s.top();
        s.pop();
    }
    cout << a;
}
