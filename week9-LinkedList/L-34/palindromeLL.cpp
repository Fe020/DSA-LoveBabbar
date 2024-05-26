#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* findMiddle(ListNode* head, ListNode* &befMid, int &size) {
        size = 0;
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != nullptr) {
            size++;
            fast = fast->next;
            if (fast != nullptr) {
                size++;
                befMid = slow;
                slow = slow->next;
                fast = fast->next;
            }
        }
        return slow;
    }
    
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        ListNode* befMid = nullptr;
        int size;
        ListNode* middle = findMiddle(head, befMid, size);

        // Reverse the second half of the list
        ListNode* cur = middle->next;
        ListNode* prev = middle;
        ListNode* temp = nullptr;
        while (cur != nullptr) { 
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        befMid->next = prev;

        // Compare values from both ends
        ListNode* top = head;
        ListNode* mid = befMid->next;
        int limit = size % 2 == 0 ? size / 2 : size / 2 + 1;
        for (int i = 0; i < limit; ++i) {
            if (top->val != mid->val)
                return false;
            top = top->next;
            mid = mid->next;
        }

        return true;
    }
};

int main() {
    // Test case
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next = new ListNode(1);

    Solution solution;
    cout << (solution.isPalindrome(head) ? "Palindrome" : "Not Palindrome") << endl;

    // Freeing memory
    delete head->next->next->next->next;
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
