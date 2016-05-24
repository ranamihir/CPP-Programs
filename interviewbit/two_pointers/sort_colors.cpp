#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector <int> &);
int main() {
	int n, i;
	cin >> n;
	vector <int> a (n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	sortColors(a);
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
void sortColors(vector <int> &a) {
	int n = a.size(), i, index;
	if(n < 2)
        return;
    vector <int> countArray (3);
    for(i = 0; i < n; i++)
        countArray[a[i]]++;
    for(i = 1; i < 3; i++)
        countArray[i] += countArray[i-1];
    vector <int> sorted (n);
    for(i = 0; i < n; i++){
        index = countArray[a[i]]-1;
        countArray[a[i]] = countArray[a[i]]-1;
        sorted[index]=a[i];
    }
    a = sorted;
}
