#include <iostream>
using namespace std;
int main(){
	long a[]={2,4,9,16,25,64,289,729,1681,2401,3481,4096,5041,7921,10201,15625,17161,27889,28561,29929,65536,83521,85849,146689,262144,279841,458329,491401,531441,552049,579121,597529,683929,703921,707281,734449,829921,1190281};
	int p = sizeof(a);
	int t, count;
	cin >> t;
	long m, n;
	while(t--){
		cin >> m >> n;
		int i=0;
		while(a[i] < m)
			i++;
        count = 0;
		while(a[i] <= n){
           count++;
           i++;
		}
		cout << count << endl;
	}
	return 0;
}
