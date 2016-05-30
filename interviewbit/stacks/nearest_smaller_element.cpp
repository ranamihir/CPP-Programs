#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> prevSmaller(vector<int> &a) {
	int n = a.size();
	vector<int> result (n, -1);
    stack<int> s;
    for (int i = 0; i < n; i++) {
		while (!s.empty() && s.top() >= a[i])
			s.pop(); 
        if (s.size())
			result[i] = s.top();
		s.push(a[i]);
    }
	return result;
}
int main() {
	vector<int> a, result;
	int n, input;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> input;
		a.push_back(input);
	}
	result = prevSmaller(a);
	for(int i = 0; i < n; i++)
		cout << result[i] << " ";
}
