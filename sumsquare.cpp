#include<iostream>;
#include<math.h>;
using namespace std;
string check(long input){
		int c = (int)(sqrt(input)/sqrt(2));
		for(int i = c;i<=(int)sqrt(input);i++){
			double d =sqrt(input-i*i);
			if(d-(int)d==0)
			if(d>=0&&d<=(int)sqrt(input))
				return "true";
		}
		return "false";
	}
	int main(){
		int T;
		cin>>T;
			string array[T];
			long input;
			for(int i = 1;i<=T;i++){
			    cin>>input;
				array[i-1] = check(input);
			}
			
			for(int i =0;i<T;i++)
				cout<<array[i]<<endl;
			
		}
	
