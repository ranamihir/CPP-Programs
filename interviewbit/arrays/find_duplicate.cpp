#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;
int repeatedNumber(const vector<int> &);
int main() {
  int n, i;
  cin >> n;
  vector <int> A;
  A.resize(n);
  for(i = 0; i < n; i++)
    cin >> A[i];
  int result = repeatedNumber(A);
  cout << result << endl;
}
int repeatedNumber(const vector<int> &a) {
	if(a.size() <= 1)
	    return -1;
	int valueRange = a.size() - 1;
	int range = sqrt(valueRange);
	if(range * range < valueRange)
	    range++;
	int count[range + 1];
	memset(count, 0, sizeof(count));
	
	for(int i = 0; i < a.size(); i++)
	    count[(a[i] - 1) / range]++;
	
	int repeatingRange = -1, numRanges = ((valueRange - 1) / range) + 1;
	for(int i = 0; i < numRanges && repeatingRange == -1; i++) {
	    if(i < numRanges - 1 || valueRange % range == 0) {
	        if(count[i] > range)
	            repeatingRange = i;
	    } else {
	        if(count[i] > valueRange % range)
	            repeatingRange = i;
	    }
	}
	if(repeatingRange == -1)
	    return -1;
	memset(count, 0, sizeof(count));
	for(int i = 0; i < a.size(); i++) {
	    if((a[i] - 1) / range == repeatingRange)
	        count[(a[i] - 1) % range]++;
	}
	for(int i = 0; i < range; i++) {
	    if(count[i] > 1)
	        return repeatingRange * range + i + 1;
	}
	return -1;
}
