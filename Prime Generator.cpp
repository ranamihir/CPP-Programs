#include <iostream>
using namespace std;
bool isPrime(int x){
    int n = 2;
    if(x<=1){
        return false;
    } 
    else if(x==2){
        return true;
	}
    else{
        bool check=true;
        while (n<x){
            if(x%n==0){
                check=false;
                break;
            }
            n++;
        };
		return check;
	}
}
int main(){
	int t,m,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>m>>n;
		for(int i=m;i<=n;i++){
			if(isPrime(i))
				cout<<i<<endl;
		}
		cout<<endl;
	}
	return 0;
}
