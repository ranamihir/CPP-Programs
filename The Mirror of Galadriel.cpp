#include <iostream>
#include <cstring>
using namespace std;
string isMagical(string);
int main(){
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		cout << isMagical(s) << endl;
	}
	return 0;
}
string isMagical(string s){
	int c = s.length();
	string b = s;
	for(int i = 0; i < c/2; i++){
		char temp = b[i];
		b[i] = b[c-i-1];
		b[c-i-1] = temp;
	}
	for(int i = 0; i < c; i++)
		for(int j = 1; j <= c-i; j++)
			if(b.find(s.substr(i, j)) == b.npos)
				return "NO";
	return "YES";
}
