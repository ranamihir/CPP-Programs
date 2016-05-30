#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

int evalRPN(vector<string> &a) {
	stack<string> s;
	int result, left, right;
	stringstream ss;
	for(int i = 0; i < a.size(); i++) {
		if (a[i] == "+" || a[i] == "-" || a[i] == "*" || a[i] == "/") {
			istringstream (s.top()) >> right;
			s.pop();
			istringstream (s.top()) >> left;
			s.pop();
			if(a[i] == "+")
				result = left + right;
			if(a[i] == "-")
				result = left - right;
			if(a[i] == "*")
				result = left * right;
			if(a[i] == "/")
				result = left / right;
			ss << result;
			s.push(ss.str());
			ss.str(std::string());
		}
		else
			s.push(a[i]);
	}
	istringstream (s.top()) >> result;
	return result;
}
int main() {
	vector<string> a;
	string input = "a";
	while (getline(cin, input)) {
	    if (input.empty())
	        break;
	    a.push_back(input);
	}
	cout << evalRPN(a);
}
