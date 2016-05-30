#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int trap(const vector<int> &a) {
	// Skip initial zeros
	int curr_index = 0, water = 0, top;
	while (curr_index < a.size() && a[curr_index] == 0)
		curr_index++;
	// Check each one
	stack<int> s;
	while (curr_index < a.size()) {
		while (s.size() && a[curr_index] >= a[s.top()]) {
			top = s.top();
			s.pop();
			if (s.empty())
				break;
			water += ((curr_index - s.top() - 1) * (min(a[curr_index], a[s.top()]) - a[top]));
		}
		s.push(curr_index);
		curr_index++;
	}
	return water;
}
int main() {
	int n = 0, input;
	cin >> n;
	vector<int> a;
	for(int i = 0; i < n; i++) {
		cin >> input;
		a.push_back(input);
	}
	cout << trap(a) << endl;
}
