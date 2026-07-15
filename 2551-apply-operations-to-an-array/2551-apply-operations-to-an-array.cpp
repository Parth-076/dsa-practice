class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        vector<int> newnums;
        for (auto x : nums) 
            if (x != 0) newnums.push_back(x);
        
        while (newnums.size() < n) 
            newnums.push_back(0);
        
        return newnums;
    }
};