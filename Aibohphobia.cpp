#include <iostream>
#include <cstring>
using namespace std;
int lcs(string, string, int, int);
int minChar(string);
int main(){
	int t = 0;
	cin >> t;
	string s = "";
	while(t--){
		cin >> s;
		cout << minChar(s) << "\n";
	}
	return 0;
}
int lcs(string X, string Y, int m, int n){
	int L[m+1][n+1];
    int i = 0, j = 0;
    for(i=0; i<=m; i++){
    	for(j=0; j<=n; j++){
        	if(i == 0 || j == 0)
         		L[i][j] = 0;
        	else if(X[i-1] == Y[j-1])
         		L[i][j] = L[i-1][j-1] + 1;
       		else
         		L[i][j] = max(L[i-1][j], L[i][j-1]);
    	}
	}
   return L[m][n];
}
int minChar(string s){
	string b = s;
	int c = s.length();
	for(int i = 0; i < c/2; i++){
		char temp = b[i];
		b[i] = b[c-i-1];
		b[c-i-1] = temp;
	}
	return (c-lcs(s, b, c, c));
}
