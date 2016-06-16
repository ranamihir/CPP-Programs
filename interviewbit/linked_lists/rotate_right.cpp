#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* rotateRight(ListNode*, int);
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
	result = rotateRight(a, value);
	while(result != NULL) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	delete a, temp, result;
}
ListNode* rotateRight(ListNode *a, int k) {
	if(!a)
		return NULL;
	if(!(a->next))
		return a;
	ListNode *fast = a, *slow = a;
    for(int i = 0; i < k; i++) {
    	if(!(fast->next))
    		fast = a;
        else
			fast = fast->next;
    }
    while(fast->next) {
        fast = fast->next;
        slow = slow->next;
    }
    ListNode *temp = slow->next;
    if(!temp)
    	return a;
    slow->next = NULL;
    fast->next = a;
    return temp;
}
