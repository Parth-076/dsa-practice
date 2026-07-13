class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto x : words) {
            if(ispal(x)) 
                return x;
        }
        return "";
    }
    bool ispal (string x) {
        int i = 0, j = x.size()-1;
        while (i < j) {
            if (x[i] != x[j]) {
                return false;
            }
            i++;
            j--;
        } return true;
    }
};