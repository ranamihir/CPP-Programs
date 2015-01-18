#include <iostream>
#include <cstdio>
#include <cmath>
int main(){
	int t, count = 1;
	scanf("%d", &t);
	long long n;
	while(t--){
		scanf("%lld", &n);
		long long i = sqrt(n+1)-1;
		printf("Case %d: %lld\n", count++, i);
	}
	return 0;
}
