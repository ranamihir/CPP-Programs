#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(1){
		cin >> n;
		if(!n)
			break;
		else{
			int a[n][3], minimum[n];
			long vol[n];
			for(int i = 0; i < n; i++){
				cin >> a[i][0] >> a[i][1] >> a[i][2];	
				minimum[i] = min(a[i][0], min(a[i][1], a[i][2]));
				vol[i] = a[i][0]*a[i][1]*a[i][2];
			}
			sort(minimum, minimum+n);
			long min_vol = minimum[0]*minimum[0]*minimum[0];
			long long sum = 0;
			for(int i = 0; i < n; i++){
				sum += vol[i]/min_vol;
			}
			cout << sum << endl;
		}
	}	
	return 0;
}
