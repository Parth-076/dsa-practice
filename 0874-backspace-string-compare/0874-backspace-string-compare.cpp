class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size(), m = t.size();
        int i = 0, j = 0;
            for (auto c : s) {
                if (c != '#') s[i++] = c;
                else if (i > 0) i--;
            }

            for (auto c : t) {
                if (c != '#') t[j++] = c;
                else if (j > 0) j--;
            }
        return (s.substr(0,i) == t.substr(0,j));
    }
};