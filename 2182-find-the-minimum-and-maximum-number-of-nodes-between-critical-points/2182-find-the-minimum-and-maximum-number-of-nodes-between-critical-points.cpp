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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int> points;
        
        auto prev = head, curr = head -> next;
        int pos = 2;

        if (!prev || !curr || !curr -> next) return {-1, -1};

        int mini = INT_MAX;

        while (curr -> next) {
            
            auto nex = curr -> next;

            if (curr -> val > prev -> val && curr -> val > nex -> val) 
                points.push_back(pos);
            
            else if (curr -> val < prev -> val && curr -> val < nex -> val) 
                points.push_back(pos);

            prev = curr;
            curr = nex;
            pos ++;       
        }
        if (points.size() < 2) return {-1, -1};
        
        for (int i = 1; i < points.size(); i++) {
            int dis = points[i] - points[i-1];
            mini = min(mini, dis);
        }

        return {mini, points[points.size()-1] - points[0]};
    }
};