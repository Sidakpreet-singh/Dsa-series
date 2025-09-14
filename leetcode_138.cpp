#include<iostream>
using namespace std;

#include <unordered_map>

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

Node* copyRandomList(Node* head) {
    if(head == NULL) return NULL;
    Node * newhead = new Node(head-> val);
    Node * old = head->next;
    Node * newtemp = newhead;
    unordered_map <Node* ,Node* > m;
    m[head] = newhead;
    while( old != NULL){
        Node *copy =new Node(old -> val);
        m[old] = copy;
        newtemp ->next = copy;
        old = old->next;
        newtemp = newtemp->next;
    }
    old = head;
    newtemp = newhead;

    while(old != NULL){
        if (old->random != NULL)
            newtemp->random = m[old->random];
        else
            newtemp->random = NULL;
        old = old->next;
        newtemp = newtemp->next;
    }
    return newhead;
}
int main() {
    // Create nodes
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);

    // Link next pointers
    node1->next = node2;
    node2->next = node3;

    // Link random pointers
    node1->random = node3;
    node2->random = node1;
    node3->random = node2;

    // Copy the list
    Node* copiedHead = copyRandomList(node1);

    // Print copied list to verify
    Node* temp = copiedHead;
    while (temp) {
        cout << "Val: " << temp->val;
        if (temp->random)
            cout << ", Random: " << temp->random->val;
        else
            cout << ", Random: NULL";
        cout << endl;
        temp = temp->next;
    }

    // Free memory (not shown for brevity)
    return 0;
}
