class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int mark = 0, n = nums.size();
        sort (nums.begin(), nums.end());
        int j = n / 2;
        int i = 0;
        while (i < n/2 && j < n) {
            if (nums[i] * 2 <= nums[j]) {
                mark += 2;
                i++;
                j++;
            } else {
                j++;
            }
        } 
        return mark;        
    }
};