class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(auto temp : nums) {
            ans.push_back(temp);
        }
        return ans;
    }
};