#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* deleteDuplicates(ListNode*);
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
	result = deleteDuplicates(a);
	while(result != NULL) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	delete a, temp, result;
}
ListNode* deleteDuplicates(ListNode* a) {
    if((a == NULL) || (a->next == NULL))
		return a;
    ListNode* pre = new ListNode(0);
    pre->next = a;
    a = pre;
    ListNode* p1 = a;
    while(p1->next != NULL) {
        ListNode *p2 = p1->next;
        while((p2->next != NULL) && (p2->val == p2->next->val))
            p2 = p2->next;
        if (p2 != p1->next)
            p1->next = p2->next;
        else
            p1 = p1->next;
    }
    return a->next;
}
