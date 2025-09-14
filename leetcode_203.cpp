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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return NULL;
        }
        while (head != NULL && head->val == val) {
            ListNode* del = head;
            head = head->next;
            delete del;
        }
        if (head == NULL) {
            return NULL;
        }

        ListNode *temp = head->next;
        ListNode *sec = head;

        while (temp != NULL) {
            if (temp->val == val) {
                ListNode *del = temp;
                sec->next = temp->next;
                temp = temp->next;
                delete del;
            } else {
                sec = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val;
        if (temp->next != nullptr) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
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
    int arr[] = {1, 2, 6, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int valToRemove = 6;

    ListNode* head = createList(arr, size);

    cout << "Original list:" << endl;
    printList(head);

    Solution sol;
    head = sol.removeElements(head, valToRemove);

    cout << "After removing " << valToRemove << ":" << endl;
    printList(head);

    return 0;
}
