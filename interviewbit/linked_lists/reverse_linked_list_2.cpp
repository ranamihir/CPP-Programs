#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* reverseBetween(ListNode*, int, int);
int main() {
	int i, size, m, n;
	ListNode *result, *temp = NULL;
	cin >> size;
	cin >> m;
	ListNode *a = new ListNode(m);
	for(i = size; i > 1; i--) {
		cin >> m;
		temp = new ListNode(m);
  		temp->next = a;
  		a = temp;
	}
	cin >> m;
	cin >> n;
	result = reverseBetween(a, m, n);
	while(result != NULL) {
		cout << result->val << " ";
		result = result->next;
	}
	cout << endl;
	delete a, temp, result;
}
ListNode* reverseBetween(ListNode* a, int m, int n) {
	ListNode* newHead = new ListNode(-1);
	newHead->next = a;
	ListNode* prev = newHead;
	for(int i = 0; i < m-1; i++)
	    prev = prev->next;
	ListNode* const reversedPrev = prev;
	prev = prev->next;
	ListNode* cur = prev->next;
	for(int i = m; i < n; i++) {
	    prev->next = cur->next;
	    cur->next = reversedPrev->next;
	    reversedPrev->next = cur;
	    cur = prev->next;
	}
	return newHead->next;
}
