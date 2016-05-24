#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector <int> &);
int main() {
	int n, i;
	cin >> n;
	vector <int> a (n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cout << removeDuplicates(a) << endl;
	for (i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}
int removeDuplicates(vector <int> &a) {
	int n = a.size(), i, end = 1;
	if(n < 3)
		return n;
    for(i = 2; i < n; i++)
        if(a[i] != a[end-1]) 
            a[++end] = a[i];
    a.resize(end+1);
    return end+1;
}
