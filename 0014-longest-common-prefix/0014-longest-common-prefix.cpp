class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = strs[0];
        string temp = "";
        for (int i = 1; i < strs.size() ; i++) {
            string check = strs[i];
            int j = 0;
            while (j < pre.size() && check[j] == pre[j]) {
                temp.push_back(check[j++]); 
            }
            pre = temp;
            temp = "";
        }
        return pre;
    }
};