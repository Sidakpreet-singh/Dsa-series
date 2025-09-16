#include <iostream>
#include <vector>

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int val1 = (l1 != NULL) ? l1->val : 0;
            int val2 = (l2 != NULL) ? l2->val : 0;

            int sum = val1 + val2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            tail->next = new ListNode(digit);
            tail = tail->next;

            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }

        return dummy.next;
    }
};

// Helper: Create linked list from vector of digits (least significant digit first)
ListNode* createList(const std::vector<int>& digits) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int digit : digits) {
        if (head == nullptr) {
            head = new ListNode(digit);
            tail = head;
        } else {
            tail->next = new ListNode(digit);
            tail = tail->next;
        }
    }

    return head;
}

// Helper: Print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        std::cout << head->val;
        if (head->next != NULL)
            std::cout << " -> ";
        head = head->next;
    }
    std::cout << " -> NULL" << std::endl;
}

int main() {
    // Example Input: 342 + 465
    std::vector<int> num1 = {2, 4, 3};  // Represents 342 (in reverse order)
    std::vector<int> num2 = {5, 6, 4};  // Represents 465 (in reverse order)

    ListNode* l1 = createList(num1);
    ListNode* l2 = createList(num2);

    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);

    std::cout << "Result: ";
    printList(result);

    return 0;
}
