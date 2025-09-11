#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
  ListNode *curr = head;
  ListNode *prev = nullptr;
  ListNode *next = nullptr;
  while (curr != nullptr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

void printList(ListNode* head) {
  while (head) {
    cout << head->val << " ";
    head = head->next;
  }
  cout << endl;
}

int main() {
  // Create list: 1->2->3->4->5
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  cout << "Original list: ";
  printList(head);

  head = reverseList(head);

  cout << "Reversed list: ";
  printList(head);

  // Free memory (not shown for brevity)
  return 0;
}
