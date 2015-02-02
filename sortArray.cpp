#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int s[] = {1,5,3,5,-6,10};
	sort(s, s+6);
	for(int i = 0; i < 6; i++)
		cout << s[i] << endl;
	return 0;
}
