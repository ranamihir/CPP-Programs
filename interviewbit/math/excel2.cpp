#include <iostream>
#include <algorithm>
using namespace std;
string convertToTitle(int);
int main() {
	int n;
	cin >> n;
	cout << convertToTitle(n) << endl;
}
string convertToTitle(int n) {
    char c = 'A';
    int a = n;
    string result = "";
    while (a) {
    	a--;
    	result += (char) (a % 26 + 'A');
    	a /= 26;
	}
	reverse(result.begin(), result.end());
	return result;
}
