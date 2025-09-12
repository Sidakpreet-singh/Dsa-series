#include<iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

// ----------------Slow fast pointer approach--------------

ListNode* middleNode(ListNode* head) {
     ListNode *slow = head;
     ListNode *fast = head;
     
     
     
     while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;


     }


     return slow;



    }

// ------------Brute Force approach----

// ListNode* middleNode(ListNode* head) {
//   ListNode *temp = head;
//   int count  =0;
//   while(temp != NULL){
//     count++;
//     temp = temp->next ;
//   }

//   for(int i =0;i< count/2 ;i++){
//     head = head->next;
//   }
//   return head;
// }

int main() {
  // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
  ListNode* head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(8);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  ListNode* mid = middleNode(head);
  cout << "Middle node value: " << mid->val << endl;

  // Free memory
 
  return 0;
}