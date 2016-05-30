#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
vector<int> slidingMaximum(const vector<int> &a, int w) {
	int n = a.size();
	vector<int> result;
	if (w > n) {
		result.push_back(*std::max_element(a.begin(), a.begin()+n));
		return result;
	}
    deque<int> q;
    result.resize(n-w+1);
	for (int i = 0; i < w; i++) {
		while (!q.empty() && a[i] >= a[q.back()])
			q.pop_back();
		q.push_back(i);
	}
	for (int i = w; i < n; i++) {
		result[i-w] = a[q.front()];
		while (!q.empty() && a[i] >= a[q.back()])
			q.pop_back();
		while (!q.empty() && q.front() <= i-w)
			q.pop_front();
		q.push_back(i);
	}
	result[n-w] = a[q.front()];
}
int main() {
	vector<int> a, result;
	int w, n, input;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> input;
		a.push_back(input);
	}
	cin >> w;
	result = slidingMaximum(a, w);
	for(int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
}
