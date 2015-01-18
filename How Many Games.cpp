#include <iostream>
#include <cmath>
using namespace std;
long gcd(long,long);
int main(){
	int t, count, i, flag;
	cin >> t;
	string s;
	long frac, number;
	while(t--){
  		cin >> s;
  		number = 1;
  		count = 0;
  		flag = 0;
  		for(i = s.size()-1; i >= 0; i--){
   			if(s[i]=='.'){
    			flag=1;
    			break;
   			}
   			else
    			count++;
  		}
  		for(i = 0; i< s.size() ; i++)
   			if(s[i] != '.')
    			number = number*10 + (s[i]-48);
  		frac = 1;
  		if(flag)
   			frac = pow(10,count);
  		cout << frac/gcd(number, frac) << endl;
 	}
	return 0;
}
long gcd(long a,long b){
	return b==0 ? a : gcd(b,a%b);
}
