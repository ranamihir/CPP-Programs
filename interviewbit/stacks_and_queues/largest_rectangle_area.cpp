#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int largestRectangleArea(vector<int> &a) {
    stack<int> s;
    int n = a.size(), max_area = 0, tp, area_with_top, i = 0;
    while (i < n) {
        if (s.empty() || a[s.top()] <= a[i])
            s.push(i++);
        else {
            tp = s.top();
            s.pop();
            area_with_top = a[tp] * (s.empty() ? i : i - s.top() - 1);
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
    while (s.empty() == false) {
        tp = s.top();
        s.pop();
        area_with_top = a[tp] * (s.empty() ? i : i - s.top() - 1);
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
    return max_area;
}
int main() {
	vector<int> a;
	int n, input, result;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> input;
		a.push_back(input);
	}
	result = largestRectangleArea(a);
	cout << result << endl;
}
