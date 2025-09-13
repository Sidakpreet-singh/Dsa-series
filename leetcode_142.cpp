#include<iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
  ListNode *slow = head;
  ListNode *fast = head;
  if (head == NULL) {
    return head;
  }
  bool cycle = false;
  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      cycle = true;
      break;
    }
  }
  slow = head;
  if (cycle) {
    while (slow != fast) {
      slow = slow->next;
      fast = fast->next;
    }
    return fast;
  }
  return NULL;
}

int main() {
  // Create nodes
  ListNode *head = new ListNode(3);
  ListNode *second = new ListNode(2);
  ListNode *third = new ListNode(0);
  ListNode *fourth = new ListNode(-4);

  // Link nodes
  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = second; // Creates a cycle at node 'second'

  ListNode *cycleNode = detectCycle(head);
  if (cycleNode) {
    cout << "Cycle detected at node with value: " << cycleNode->val << endl;
  } else {
    cout << "No cycle detected." << endl;
  }

  // Note: Memory cleanup is omitted due to cycle in the list.
  return 0;

  
}
