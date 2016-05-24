#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
vector <int> maxSet(vector<int> &);
vector <int> calcSum(vector <vector <int> > &);
int main() {
  int n, value;
  cin >> n;
  vector <int> A;
  for(int i = 0; i < n; i++) {
    cin >> value;
    A.push_back(value);
  }
  vector <int> result = maxSet(A);
  for(int i = 0; i < result.size(); i++)
    cout << result[i] << " ";
  cout << endl;
}
vector <int> maxSet(vector<int> &A) {
  vector <vector <int> > result;
  result.resize(1);
  int size = A.size(), i, index = 0;
  for (i = 0; i < size; i++) {
    if (A[i] <= 0) {
      result.resize(result.size() + 1);
      index++;
      continue;
    }
    else
      result[index].push_back(A[i]);
   }
   return calcSum(result);
}
vector <int> calcSum(vector <vector <int> > &result) {
  vector <double> sum;
  int n = result.size();
  for(int i = 0; i < n; i++)
    sum.push_back(accumulate(result[i].begin(), result[i].end(), 0.0));
  return result[distance(sum.begin(), max_element(sum.begin(), sum.end()))];
}
