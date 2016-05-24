#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool hotel(vector<int> &, vector<int> &, int);
int main() {
  int n, k, i;
  vector <int> A, B;
  cin >> n;
  A.resize(n);
  B.resize(n);
  for(i = 0; i < n; i++)
    cin >> A[i];
  for(i = 0; i < n; i++)
    cin >> B[i];
  cin >> k;
  cout << "IsPossible: " << hotel(A, B, k) << endl;
}
bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
  if(K == 0)
    return false;
  int n = arrive.size(), currentActive = 0, maxActive = 0;
  vector<pair<int, int> > vec;
  for(int i = 0; i < n; i++) {
    vec.push_back(make_pair(arrive[i], 1));
    vec.push_back(make_pair(depart[i], 0));
  }
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i].second == 1) {
      currentActive++;
      maxActive = max(maxActive, currentActive);
    }
    else
      currentActive--;
  }
  if (K >= maxActive)
    return true;
  return false;
}
