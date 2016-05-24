#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &, vector<int> &);
int main() {
	int n1, n2, i;
	cin >> n1;
	vector <int> a (n1);
	for(i = 0; i < n1; i++)
		cin >> a[i];
	cin >> n2;
	vector <int> b (n2);
	for(i = 0; i < n2; i++)
		cin >> b[i];
	merge(a, b);
	for(i = 0; i < n1+n2; i++)
		cout << a[i] << " ";
	cout << endl;
}
void merge(vector<int> &a, vector<int> &b) {
	int n1 = a.size(), n2 = b.size(), i = 0, j = 0, k = 0;
	vector <int> temp (n1+n2);
	while(i < n1 && j < n2){
		if(a[i] < b[j]){
			temp[k] = a[i];
			i++;
		}
		else{
			temp[k] = b[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		temp[k] = a[i];
		i++;
		k++;
	}
	while(j < n2){
		temp[k] = b[j];
		j++;
		k++;
	}
	a.resize(n1+n2);
	a = temp;
}
