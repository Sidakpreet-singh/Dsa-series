#include <iostream>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
    
    Node(int _val) {
        val = _val;
        prev = nullptr;
        next = nullptr;
        child = nullptr;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL) return head;
        
        Node* curr = head;
        
        while (curr != NULL) {
            if (curr->child != NULL) {
                Node* next = curr->next;
                Node* childHead = flatten(curr->child);
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;

                while (curr->next != NULL) {
                    curr = curr->next;
                }

                if (next != NULL) {
                    curr->next = next;
                    next->prev = curr;
                }
            }

            curr = curr->next;
        }
        
        return head;
    }
};

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->child = new Node(3);
    
    Solution sol;
    Node* flatHead = sol.flatten(head);

    // Print flattened list
    Node* curr = flatHead;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;

    return 0;
}
