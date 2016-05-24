#include <iostream>
#include <string>
using namespace std;
string countAndSay(int);
int main() {
	int n;
	cin >> n;
	cout << countAndSay(n) << endl;
}
string countAndSay(int n) {
	if (n == 1)
		return "1";
    string a = "1", b, temp;
    for (int i = 1; i < n; i++) {
        b = "";
        // current digit
        char c = a[0];
        // how many times this appear
        int count = 1, len = a.length();
        for (int j = 1; j < len; j++) {
            if (a[j] == c)
                count++;
			else {
				// we have a new digit
                temp = "";
                // convert count to string
                while (count) {
                    temp = char(48 + (count % 10)) + temp;
                    count /= 10;
                }
                // add previous digit
                b += temp + c;
                // make current digit next
                c = a[j];
                count = 1;
            }
        }
        temp = "";
        // convert count to string
        while (count) {
            temp = char(48 + (count % 10)) + temp;
            count /= 10;
        }
        b += temp + c;
        // iterative
        a = b;
    }
    return b;
}
