class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res = -1;
        unordered_map<int,int> count;
        for (auto num : arr) {
            count[num]++;
        }
        for (auto &x : count) {
            if(x.first == x.second) {
                res = max(res , x.second);
            }
        }
        return res;
    }
};