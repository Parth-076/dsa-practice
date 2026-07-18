class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size();
        while (i < j - 1) {
            swap(nums[i], nums[i+1]);
            i+=2;
        }
        return nums;
    }
};