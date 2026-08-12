/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head -> next) return;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode *prev = nullptr;
        ListNode *curr = slow -> next;
        slow -> next = nullptr;
        while (curr) {
            ListNode *temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        ListNode* h1 = head;
        ListNode* h2 = prev;
        while(h2) {
            ListNode *temp1 = h1 -> next;
            ListNode *temp2 = h2 -> next;
            h1 -> next = h2;
            h2 -> next = temp1;
            h1 = temp1;
            h2 = temp2;
        }
    }
};