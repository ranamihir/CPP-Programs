#include <iostream>
#include <vector>
using namespace std;
vector <string> fullJustify(vector <string> &, int);
int main() {
	int n, l, i;
	cin >> n;
	vector <string> a;
	a.resize(n);
	for (i = 0; i < n; i++)
		cin >> a[i];
	cin >> l;
	vector <string> result = fullJustify(a, l);
	for (i = 0; i < result.size(); i++)
		cout << "|" << result[i] << "|" << endl;
}
vector <string> fullJustify(vector <string> &a, int l) {
	vector <string> result;
	string buf;
    int n = a.size(), pos = 0, len, next, i, count, spaces, t;
    while (pos < n) {
        len = a[pos].length();
        next = -1;
        for (i = pos + 1; i < n; i++) {
            if (len + a[i].length() + 1 <= l)
                len += a[i].length() + 1;
            else {
                next = i;
                break;
            }
        }
        if (next == -1)
            next = n;
        count = next - pos;
        spaces = next == n ? count - 1 : l - len + count - 1;
        buf = "";
        for (i = pos; i < next; i++) {
            buf.append(a[i]);
            t = 0;
            if (count == 1)
                t = spaces;
            else if (i != next - 1)
                t = spaces / (count - 1) + (spaces % (count - 1) > i - pos);
            while (t--)
                buf.append(" ");
        }
        if (next == n) {
            for (i = 0; i < l - len; ++i)
                buf.append(" ");
        }
        pos = next;
        result.push_back(buf);
    }
    return result;
}
