#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector <int> &, int, int);
int books(vector <int> &, int);
int main() {
	int n, i, value, m;
	 cin >> n;
	 vector <int> a;
	 for (i = 0; i < n; i++) {
	 	cin >> value;
	 	a.push_back(value);
	 }
	 cin >> m;
	 cout << books(a, m) << endl;
}
bool isPossible(vector<int> &a, int m, int curMin) {
    int studentsRequired = 1, curSum = 0, i;
    for (i = 0; i < a.size(); i++) {
        if (a[i] > curMin)
			return false;
        if (curSum + a[i] > curMin) {
            studentsRequired++;
            curSum = a[i]; 
            if (studentsRequired > m)
				return false;
        }
		else
            curSum += a[i];
    }
    return true;
}
int books(vector <int> &a, int m) {
    long long sum = 0;
    int n = a.size(), answer = INT_MAX, i;
    if(n < m)
        return -1;
    for(i = 0; i < n; i++)
        sum += a[i];
    long long start = 0, end = sum, mid;
    while(start <= end) {
        mid = start + (end-start)/2;
        if (isPossible(a, m, mid)) {
            answer = min(answer, (int)mid);
            end = mid - 1;
        }
		else
            start = mid + 1;
    }
    return answer;
}
