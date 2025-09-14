#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode dummy(0);
    ListNode *tail = &dummy;
  
    while(list1 != NULL && list2 != NULL){
        if(list1->val <= list2->val){
            tail->next = list1;
            list1 = list1->next;
        }
        else{
            tail->next = list2;
            list2 = list2->next;
        }
        tail=tail->next;
    }
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;
}
int main() {
    // Create first sorted list: 1 -> 3 -> 5
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(5);

    // Create second sorted list: 2 -> 4 -> 6
    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    // Merge the lists
    ListNode* merged = mergeTwoLists(list1, list2);

    // Print merged list
    while (merged != nullptr) {
        cout << merged->val << " ";
        merged = merged->next;
    }
    cout << endl;

    return 0;
}
