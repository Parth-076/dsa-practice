class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        while(j < n) {

            nums[i] = nums[j];

            while(j < n && nums[i] == nums[j]) {
                j++;
            }
            i++;
        }
        return i;
    }
};