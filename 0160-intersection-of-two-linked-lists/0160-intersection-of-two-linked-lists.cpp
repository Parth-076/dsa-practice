/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) 
            return nullptr;

        ListNode* last = headA;

        while (last -> next) 
            last = last -> next;

        last -> next = headB;

        ListNode* fast = headA;
        ListNode* slow = headA;
        bool cycle = false;

        while (fast && fast -> next) {
            
            fast = fast -> next -> next;
            slow = slow -> next; 
            if (fast == slow) {
                cycle = true;
                break;
            }
        }
        ListNode* intersection = nullptr;
        if (cycle) {

            slow = headA;
            while (slow != fast) {
                slow = slow -> next; 
                fast = fast -> next;
            }

            intersection = slow;

        } 
        last -> next = nullptr;
        return intersection;
    }
};