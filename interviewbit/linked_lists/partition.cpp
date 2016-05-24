#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode * partition(ListNode *, int);
int main() {
	int n, x, value;
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
	cin >> x;
	result = partition(a, x);
	while(result != NULL) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	delete a, temp, result;
}
ListNode * partition(ListNode *head, int x) {
	if(head == NULL)
		return NULL;
	ListNode *fakeHead1 = new ListNode(0), *fakeHead2 = new ListNode(0);
	fakeHead1->next = head;
	ListNode *p1 = head, *prev = fakeHead1, *p2 = fakeHead2;
	while(p1 != NULL){
		if(p1->val < x) {
			// Continue to next element
			p1 = p1->next;
			prev = prev->next;
		}
		else {
			// Shift element to last position
			p2->next = p1;
            prev->next = p1->next;
            p1 = p1->next;
            p2 = p2->next;
        } 
    }
    // Close the list
    p2->next = NULL;
    prev->next = fakeHead2->next;
    delete fakeHead2, p1, prev, p2;
    return fakeHead1->next;
}
