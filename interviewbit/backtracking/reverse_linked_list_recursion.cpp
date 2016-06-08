#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* reverseList(ListNode*);
int main() {
	int n, value;
	ListNode *result, *temp = NULL;
	cin >> n;
	cin >> value;
	ListNode *a = new ListNode(value);
	for(int i = n; i > 1; i--) {
		cin >> value;
		temp = new ListNode(value);
  		temp->next = a;
  		a = temp;
	}
	result = reverseList(a);
	while(result != NULL) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	delete a, temp, result;
}
ListNode* reverseList(ListNode* a) {
    ListNode *revHead;
    if (a == NULL || a->next == NULL)
        return a;
    revHead = reverseList(a->next);
    a->next->next = a;
    a->next = NULL; 
    return revHead;
}
