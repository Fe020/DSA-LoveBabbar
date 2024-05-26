#include <iostream>
#include <map>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::map<ListNode*, bool> table;
        ListNode* temp = head;
        while (temp) {
            if (table[temp] == true)
                return true;
            else
                table[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    // Test case
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Creating a cycle

    Solution solution;
    std::cout << "Has cycle: " << (solution.hasCycle(head) ? "true" : "false") << std::endl;

    // Freeing memory
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
