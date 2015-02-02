#include <iostream>
#include <fstream>
using namespace std;
void countInv(char *);
int main(){
	countInv("data1.txt");
	countInv("data2.txt");
	countInv("data3.txt");
	return 0;
}
void countInv(char * fileName){
	ifstream myfile(fileName);
	int n = 6, count = 0, i = 0;
	int *a = new int[n];
	while (! myfile.eof()){
  		myfile >> a[i];
  		i++;
	}
  	myfile.close();
	for(i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(a[i] > a[j])
				count++;
	cout << count << endl;
	delete [] a;	
}
