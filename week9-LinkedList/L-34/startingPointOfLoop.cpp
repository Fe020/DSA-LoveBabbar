#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr)
            return nullptr;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Detect cycle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                break;
        }
        
        // If no cycle found
        if (fast == nullptr || fast->next == nullptr)
            return nullptr;
        
        // Move slow to head, keep fast where it is
        slow = head;
        
        // Move both pointers one step at a time until they meet at the start of the cycle
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
};

// Function to create a linked list
ListNode* createList(std::initializer_list<int> values) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int val : values) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Function to free memory of the linked list
void freeList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Test case
    ListNode* head = createList({3, 2, 0, -4});
    head->next->next->next->next = head->next; // Creating a cycle

    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);
    if (cycleStart != nullptr) {
        std::cout << "Cycle starts at node with value: " << cycleStart->val << std::endl;
    } else {
        std::cout << "No cycle detected." << std::endl;
    }

    // Freeing memory
    head->next->next->next->next = nullptr; // Break the cycle
    freeList(head);

    return 0;
}
