#include <iostream>
using namespace std;
void isPossible(long, long, long, long, long);
int main(){
	long n, a, b, c, d;
	while(1){
		cin >> n >> a >> b >> c >> d;
		if(!n && !a && !b && !c && !d)
			break;
		else
			isPossible(n, a, b, c, d);
	}
	return 0;
}
void isPossible(long n, long a, long b, long c, long d){
	if(n != (a+b+c+d))
		cout << "Impossible" << endl;
	
}
