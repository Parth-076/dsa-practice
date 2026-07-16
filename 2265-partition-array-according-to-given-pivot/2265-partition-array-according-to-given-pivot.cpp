class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int less = 0;
        int equal = 0; 
        int great = 0;
        int n = nums.size();

        for (auto x : nums) {
            if (x < pivot) less++;
            else if (x == pivot) equal++;
            else great++;
        }

        equal = n - (equal + great);
        great = n - great;
        less = 0;
        vector<int> ans(n);
        for (auto x : nums) {
            if (x < pivot) ans[less++] = x;
            else if (x == pivot) ans[equal++] = x;
            else ans[great++] = x;
        }
        return ans;
    }
};