#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void swap(vector <int> &, int);
vector <int> wave(vector<int> &);
int main() {
  int n, i;
  cin >> n;
  vector <int> A;
  A.resize(n);
  for(i = 0; i < n; i++)
    cin >> A[i];
  vector <int> result = wave(A);
  for(i = 0; i < n; i++)
    cout << result[i] << " ";
  cout << endl;
}
void swap(vector <int> &A, int i) {
  int temp = A[i];
  A[i] = A[i+1];
  A[i+1] = temp;
}
vector <int> wave(vector<int> &A) {
  vector <int> a = A;
  sort(a.begin(), a.end());
  for(int i = 0; i < a.size()-1; i += 2)
    swap(a, i);
  return a;
}
