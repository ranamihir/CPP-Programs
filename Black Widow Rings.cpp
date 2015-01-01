#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
 	while(t--){
	    int N, i, j, count = 0, flag = 0, index;
  		cin >> N;
  		long r[N], R[N];
  		for(i = 0; i < N; i++)
  			cin >> r[i] >> R[i];
  		for(i = 0; i< N; i++){
   			j = 0, count = 0;
   			for(j = 0; j < N; j++){
    			if(j != i){
     				if(r[i] > R[j])
      					count++;
     				else{
      					flag=0;
      					break;
     				}
    			}
   			}
   			if(count == (N-1)){
    			flag = 1;
    			index = i;
    			break;
   			}
  		}
  		if(flag == 1)
   			cout << index+1 << endl;
  		else
  			cout << -1 << endl;
   }
   return 0;
}
