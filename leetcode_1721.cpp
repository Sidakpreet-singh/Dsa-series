#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode *first = head;
        ListNode *temp = head;
        int n = 0;
        ListNode *sec = head;

        // Count total nodes
        while (temp != NULL) {
            n++;
            temp = temp->next;
        }

        // Move to k-th node from start
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        // Move to k-th node from end
        for (int i = 1; i <= n - k; i++) {
            sec = sec->next;
        }

        // Swap their values
        swap(first->val, sec->val);

        return head;
    }
};

// Helper functions to test locally
ListNode* createList(vector<int> vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution s;
    vector<int> vals = {1, 2, 3, 4, 5};
    ListNode* head = createList(vals);

    cout << "Original list: ";
    printList(head);

    head = s.swapNodes(head, 2);

    cout << "After swapping k-th nodes: ";
    printList(head);

    return 0;
}
