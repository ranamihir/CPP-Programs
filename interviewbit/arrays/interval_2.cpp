#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Interval {
  int start;
  int end;
  Interval() : start(0), end(0) {}
  Interval(int s, int e) : start(s), end(e) {}
};
bool doesIntersect(Interval, Interval);
bool compareFirst(Interval, Interval);
vector <Interval> merge(vector <Interval> &);
int main() {
  int n, a, b;
  cin >> n;
  vector <Interval> intervals;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    intervals.push_back(Interval(a, b));
  }
  vector <Interval> result = merge(intervals);
  for (int i = 0; i < result.size(); i++)
    cout << result[i].start << " " << result[i].end << endl;
}
bool doesIntersect(Interval a, Interval b) {
    if (min(a.end, b.end) < max(a.start, b.start))
		return false;
    return true;
}
bool compareFirst(Interval a, Interval b) {
	return a.start < b.start;
}
vector <Interval> merge(vector <Interval> &a) {
    int n = a.size();
    if (n == 0)
    	return a;
    vector <Interval> result; 
    sort(a.begin(), a.end(), compareFirst);
    result.push_back(a[0]);
    for (int i = 1; i < n; i++) {
    	Interval top = result[result.size()-1];
    	if (!doesIntersect(a[i], top))
    		result.push_back(a[i]);
    	else
    		if (a[i].end > top.end)
    			result[result.size()-1].end = a[i].end;
	}
	return result;
}
