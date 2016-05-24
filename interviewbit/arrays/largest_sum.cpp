#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool compareNum(string, string);
string largestSum(const vector<int> &);
int main() {
  int n, value;
  cin >> n;
  vector <int> A;
  for(int i = 0; i < n; i++) {
    cin >> value;
    A.push_back(value);
  }
  cout << largestSum(A) << endl;
}
bool compareNum(string a, string b) {
  return a + b > b + a;
}
string largestSum(const vector<int> &A) {
  string result;
  stringstream ss;
  vector<string> str;
  for (int i = 0; i < A.size(); i++) {
    std::string element_str = std::to_string(A[i]);
    str.push_back(element_str);
  }
  sort(str.begin(), str.end(), compareNum);
  for (int i = 0; i < str.size(); i++)
    result += str[i];
  int pos = 0;
  while (result[pos] == '0' && pos + 1 < result.size())
    pos++;
  return result.substr(pos);
}
