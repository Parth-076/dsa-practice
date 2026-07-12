class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i, j = nums.size() - 1;
        for(i = 0; i <= j; i++) {
            nums[i] = pow (abs(nums[i]),2);
        }
        i = 0;
        vector<int> ans(nums.size());
        int pos = j;
        while (i <= j) {
            if (nums[i] > nums[j]) {
                ans[pos] = nums[i];
                pos--;
                i++;
            } else {
                ans[pos] = nums[j];
                pos--;
                j--;
            }
        } 
        return ans;
    }
};