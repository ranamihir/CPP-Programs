#include <iostream>
#include <vector>
using namespace std;
int firstMissingPositive(vector <int> &);
int main() {
  int n, value, i;
  cin >> n;
  vector <int> a;
  for (i = 0; i < n; i++) {
  	cin >> value;
  	a.push_back(value);
  }
  cout << firstMissingPositive(a) << endl;
}
int firstMissingPositive(vector <int> &A) {
   // in-place swap (bucket sort)
   int i = 0, temp, n = A.size();
   while (i < n) {
     if (A[i] > 0 && A[i] <= n && A[i] != i+1 && A[i] != A[A[i]-1]) {
       temp = A[A[i]-1];
       A[A[i]-1] = A[i];
       A[i] = temp;
     }
	 else
	 	i++;
   }
   // find the first positive missing integer
   i = 0;
   while (i < n && A[i] == i+1)
   	i++;
   return i+1;
 }
