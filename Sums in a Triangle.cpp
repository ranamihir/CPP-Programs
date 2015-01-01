#include <iostream>,<algorithm>
using namespace std;
int main(){
	int t,n,i,j;
	cin>>t;
	while(t--){
		cin>>n;
		int a[99][99];
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
				cin>>a[i][j];
		for(i=n-2;i>=0;i--)
  			for(j=0;j<=i;j++)
   				a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
		cout<<a[0][0]<<endl;
	}
	return 0;
}
