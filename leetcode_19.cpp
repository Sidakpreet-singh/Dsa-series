#include<iostream>
using namespace std;
struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp =head;
        ListNode * temp2 =head;
        int length =0;
        while(temp != NULL){
            length++;
            temp =temp->next;
        }

        temp = head;
        for(int i =0;i<length -n-1;i++){
            temp = temp ->next;
            temp2 = temp2->next;
        }

           if (n == length) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp2->next = temp->next->next;

        temp=temp->next;
        temp = NULL;
        

        return head;

        
    }
    int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 3; // Example: remove 2nd node from end
    head = removeNthFromEnd(head, n);

    // Print the resulting list
    ListNode* curr = head;
    while (curr) {
        cout << curr->val << " ";
        ListNode* temp = curr;
        curr = curr->next;
        delete temp; // Free memory
    }
    cout << endl;

    return 0;
}
