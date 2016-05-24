#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode * addTwoNumbers(ListNode *, ListNode *);
int main() {
	int i, m, n, value;
	ListNode *result, *temp = NULL;
	cin >> m;
	cin >> value;
	ListNode *a = new ListNode(value);
	for(i = m; i > 1; i--) {
		cin >> value;
		temp = new ListNode(value);
  		temp->next = a;
  		a = temp;
	}
	cin >> n;
	cin >> value;
	ListNode *b = new ListNode(value);
	for(i = n; i > 1; i--) {
		cin >> value;
		temp = new ListNode(value);
  		temp->next = b;
  		b = temp;
	}
	result = addTwoNumbers(a, b);
	while(result != NULL) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	delete a, b, temp, result;
}
ListNode * addTwoNumbers(ListNode *a, ListNode *b) {
	ListNode *result = NULL, *temp, *prev = NULL;
    int carry = 0, sum;
    while (a != NULL || b != NULL) {
        sum = carry + (a ? a->val : 0) + (b ? b->val : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum %= 10;
        temp = new ListNode(sum);
        if(result == NULL)
            result = temp;
        else
            prev->next = temp;
        prev  = temp;
        if (a)
			a = a->next;
        if (b)
			b = b->next;
    }
    if (carry > 0)
      temp->next = new ListNode(carry);
    delete temp, prev;
    return result;
}
