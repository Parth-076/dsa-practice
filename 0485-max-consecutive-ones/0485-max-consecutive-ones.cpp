class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0, res = 0;
        for(auto x: nums) {
            if (x == 0) {
                res = max(res, maxi);
                maxi = 0;
            } else {
                maxi++;
            }
        }
        return max(res, maxi);
    }
};