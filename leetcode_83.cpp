#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }

        ListNode* first = head->next;
        ListNode* sec = head;

        while (first != NULL) {
            if (first->val == sec->val) {
                sec->next = first->next;
                ListNode* temp = first;
                first = first->next;
                delete temp;
            } else {
                first = first->next;
                sec = sec->next;
            }
        }

        return head;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createList(arr, size);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.deleteDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}
