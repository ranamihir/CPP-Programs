#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(long long, int, vector <int> &);
int paint(int, int, vector <int>);
int main() {
	int k, t, n, i, value;
	cin >> k >> t >> n;
	vector <int> a;
	for (i = 0; i < n; i++) {
		cin >> value;
		a.push_back(value);
	}
	cout << paint(k, t, a) << endl;
}
bool isPossible(long long max, int k, vector <int> &a) {
    int max_ele = *max_element(a.begin(), a.end());
    if(max_ele > max)
            return false; 
    long long sum = 0;
    int count = 1, n = a.size();
    for(int i = 0; i < n;) {
        if(sum + ((long long)a[i]) > max) {
            sum = 0;
            count++;
        } else {
            sum += ((long long)a[i]);
            i++;
        }
    }
    if(count <= k)
            return true;
    return false;
}
int paint(int k, int t, vector <int> a) {   
    int n = a.size();
    long long end = 0, start = 0, answer = INT_MAX, mid;
    for(int i = 0; i < n; ++i) {
        end += a[i];
    }
    answer *= INT_MAX;
    while(start <= end) {
        mid = (start + end) / 2;
        if(isPossible(mid, k, a)) {
            answer = min(answer, mid);
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    int result = ((answer % 10000003) * ((long long) t % 10000003) % 10000003);
    return result;
}
