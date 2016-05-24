#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
void reverse(ListNode **);
bool compareLists(ListNode *, ListNode *);
int lPalin(ListNode *);
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
	cout << lPalin(a) << endl;
	delete a, temp, result;
}
void reverse(ListNode **head_ref) {
    ListNode *prev = NULL, *current = *head_ref, *next;
    while (current != NULL) {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
bool compareLists(ListNode *head1, ListNode *head2) {
    ListNode *temp1 = head1, *temp2 = head2;
    while (temp1 && temp2) {
        if (temp1->val == temp2->val) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
			return 0;
    }
    if (temp1 == NULL && temp2 == NULL)
        return 1;
    return 0;
}
int lPalin(ListNode *head) {
	ListNode *slow_ptr = head, *fast_ptr = head, *second_half, *prev_of_slow_ptr = head, *mid_node = NULL;
	int result = 1;
	if (head != NULL && head->next != NULL) {
        while (fast_ptr != NULL && fast_ptr->next != NULL) {
            fast_ptr = fast_ptr->next->next;
            prev_of_slow_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
        if (fast_ptr != NULL) {
            mid_node = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
        second_half = slow_ptr;
        prev_of_slow_ptr->next = NULL;
        reverse(&second_half);
        result = compareLists(head, second_half);
		reverse(&second_half);
		if (mid_node != NULL) {
			prev_of_slow_ptr->next = mid_node;
            mid_node->next = second_half;
		}
		else
			prev_of_slow_ptr->next = second_half;
    }
    return result;
}
