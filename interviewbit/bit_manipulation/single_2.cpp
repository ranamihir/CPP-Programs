#include <iostream>
#include <vector>
using namespace std;
int singleNumber(const vector <int> &);
int main() {
	int n, i;
	cin >> n;
	vector <int> a;
	a.resize(n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	cout << singleNumber(a) << endl;
}
int singleNumber(const vector <int> &a) {
	int ones = 0, twos = 0, n = a.size(), common_bit_mask;
    // Eg.- a = {3, 3, 2, 3}
    for(int i = 0; i < n; i++) {
        /* The expression "one & a[i]" gives the bits that are
           there in both 'ones' and new element from a[].  We
           add these bits to 'twos' using bitwise OR.
           Value of 'twos' will be set as 0, 3, 3 and 1 after 1st,
           2nd, 3rd and 4th iterations respectively. */
        twos  = twos | (ones & a[i]);
        /* XOR the new bits with previous 'ones' to get all bits
           appearing odd number of times
           Value of 'ones' will be set as 3, 0, 2 and 3 after 1st,
           2nd, 3rd and 4th iterations respectively */
        ones  = ones ^ a[i];
        /* The common bits are those bits which appear third time
           So these bits should not be there in both 'ones' and 'twos'.
           common_bit_mask contains all these bits as 0, so that the bits can 
           be removed from 'ones' and 'twos'   
           Value of 'common_bit_mask' will be set as 00, 00, 01 and 10
           after 1st, 2nd, 3rd and 4th iterations respectively */
        common_bit_mask = ~(ones & twos);
        /* Remove common bits (the bits that appear third time) from 'ones'
           Value of 'ones' will be set as 3, 0, 0 and 2 after 1st,
           2nd, 3rd and 4th iterations respectively */
        ones &= common_bit_mask;
        /* Remove common bits (the bits that appear third time) from 'twos'
           Value of 'twos' will be set as 0, 3, 1 and 0 after 1st,
           2nd, 3rd and 4th itearations respectively */
        twos &= common_bit_mask;
    }
    return ones;
}
