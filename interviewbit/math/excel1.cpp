#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int titleToNumber(string);
int main() {
	string s;
	cin >> s;
	cout << titleToNumber(s) << endl;
}
int titleToNumber(string s) {
	map <char, int> m;
    char c = 'A';
    for(int i = 1; i <= 26; i++){
		m.insert(pair <char, int> (c, i));
		c++;
    }
    int result = 0, i = s.length()-1, t = 0;
    while(i >= 0){
        result += (int) pow(26, t) * m[s.at(i)];
        t++;
        i--;
    } 
    return result;
}

