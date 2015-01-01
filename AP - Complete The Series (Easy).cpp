#include <iostream>
using namespace std;
long long numTerms(long long, long long, long long);
void series(long long, long long, long long);
int main(){
	int t;
	cin >> t;
	long long term_3, term_3_last, sum;
	while(t--){
		cin >> term_3 >> term_3_last >> sum;
		long long n = numTerms(term_3, term_3_last, sum);
		cout << n << endl;
		series(term_3, term_3_last, n);
	}
	return 0;
}
long long numTerms(long long term_3, long long term_3_last, long long sum){
	return 2*sum/(term_3+term_3_last);
}
void series(long long term_3, long long term_3_last, long long n){
	long long d = (term_3_last-term_3)/(n-5);
	long long term_1 = term_3 - 2*d;
	for(long long i = 0; i < n; i++){
		cout << term_1+i*d << " ";
	} 
}
