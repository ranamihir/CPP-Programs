#include <iostream>
#include <vector>
using namespace std;
vector <int> maxone(vector <int> &a, int);
int main() {
	int n, i, m;
	cin >> n;
	vector <int> a (n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	vector <int> result = maxone(a, m);
	for(i = 0; i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
}
vector <int> maxone(vector <int> &a, int m) {
    int l = 0, r = 0, nZero = 0, width = -1, start, end;
    while (r < a.size()) {
        if (nZero <= m) {
            if (a[r] == 0)
                nZero++;
            r++;
        }
        if (nZero > m) {
            if (a[l] == 0)
                nZero--;;
            l++;
        }
        if (r - l + 1 > width) {
            width = r - l + 1;
            start = l;
            end = r;
        }
    }
    vector <int> result;
    for (int i = start; i < end; i++)
        result.push_back(i);
    return result;
}
