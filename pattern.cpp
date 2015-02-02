#include <iostream>

using namespace std;

int main()

{
	
	int n=0,l,k;
	
	cout << "Enter the number of desired rows: " << endl;
	cin >> n;
	
	for (int i=1; i <=n; i++)
	{
		for (k=i;k<=n-1;k++)
		cout<<" ";
		
	    for(l=1;l<2*i;l++)
	    cout<<"*";
	    
	    cout<<endl;
		
		
	}
	
	return 0;
}
