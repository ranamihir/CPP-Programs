#include <iostream>
using namespace std;
bool checkPalindrome(string b){
	bool check = true;
	long c = b.length();
	char *d = new char [c];
	for(int i = 0; i < c; i++)
		d[i] = b[i];
	for(int i = 0; i < c/2; i++)
	{
		char temp = b[i];
		b[i] = b[c-i-1];
		b[c-i-1] = temp;
	}
	for(int i = 0; i < c; i++)
	{
		if(d[i] != b[i])
		{
			check = false;
			break;
		}
	}
	delete [] d;
	return check;
}
string nextNumString(string s){
	string a = '0' + s;
	long n = a.length();
	if(a[n-1] != '9'){
		int x = int(a[n-1])-48;
		x++;
		a[n-1] = (char)(((int)'0')+(x));
	}
	else{
		int i = n-1;
		while(a[i] == '9'){
			a[i] = '0';
			i--;
		}
		int x = int(a[i])-48;
		x++;
		a[i] = (char)(((int)'0')+(x)); 
	}
	if(a[0] == '0')
		a = a.substr(1);
	return a;
}
int main(){
	int t;
	cin >> t;
	string *m = new string[t];
	string *n = new string[t];
	for(int i = 0; i < t; i++)
		cin >> n[i];
	for(int i = 0; i < t; i++)
		m[i] = n[i];
	for(int i = 0; i < t; i++){
		for(long j = 0; ; j++){
			m[i] = nextNumString(m[i]);
			if(checkPalindrome(m[i])){
				cout << m[i] << endl;
				break;
			}
		}
	}
	delete []m;
	delete []n;
	return 0;	
}
