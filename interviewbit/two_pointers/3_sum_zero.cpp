#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <vector <int> > threeSum(vector <int> &);
int main() {
	int n, i, j;
	cin >> n;
	vector <int> a;
	a.resize(n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	vector <vector <int> > result = threeSum(a);
	for(i = 0; i < result.size(); i++) {
		for(j = 0; j < result[i].size(); j++)
			cout << result[i][j] << " ";
		cout << endl;
	}
}
vector <vector <int> > threeSum(vector <int> &a) {
	vector <vector <int> > result;
	vector <int> sub_result (3);
	sort(a.begin(), a.end());
	int i, j, k, n = a.size(), sum;
	for (i = 0; i < n; i++) {
		j = i + 1;
		k = n - 1;
		while (j < k) {
			sum = a[i] + a[j] + a[k];
			if(sum == 0) {
				sub_result[0] = a[i];
				sub_result[1] = a[j];
				sub_result[2] = a[k];
				result.push_back(sub_result);
				j++;
				k--;
			}
			else if (sum < 0)
				j++;
			else
				k--;
		}
	}
	sort(result.begin(), result.end());
	result.erase(unique( result.begin(), result.end() ), result.end());
	return result;
}
