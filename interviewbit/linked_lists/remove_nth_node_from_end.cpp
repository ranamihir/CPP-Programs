#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* removeNthFromEnd(ListNode*, int);
int main() {
	int i, n, value;
	ListNode *result, *temp = NULL;
	cin >> n;
	cin >> value;
	ListNode *a = new ListNode(value);
	for(i = n; i > 1; i--) {
		cin >> value;
		temp = new ListNode(value);
  		temp->next = a;
  		a = temp;
	}
	cin >> value;
	result = removeNthFromEnd(a, value);
	while(result != NULL) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	delete a, temp, result;
}
ListNode* removeNthFromEnd(ListNode* a, int n) {
	if(a == NULL)
		return NULL;
	ListNode *fast = a, *slow = a;
    for(int i = 0; i < n; i++) {
    	if(fast == NULL)
    		return a->next;
        fast = fast->next;
    }
    if(fast == NULL) {
        a = a->next;
        return a;
    }
    while(fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return a;
}
