#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* mergeTwoLists(ListNode*, ListNode*);
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
	result = mergeTwoLists(a, b);
	while(result != NULL) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	delete a, b, temp, result;
}
ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
	if (a == NULL)
		return b;
	if (b == NULL)
		return a;
	if (a->val <= b->val) {
		a->next = mergeTwoLists(a->next, b);
    	return a;
	}
	else {
    	b->next = mergeTwoLists(b->next, a);
    	return b;
	}
}
