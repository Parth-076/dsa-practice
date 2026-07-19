class Solution {
public:
    bool isVowel (char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    string reverseWords(string s) {
        int vol = 0;
        int x = 0;
        while (x < s.size() && s[x] != ' ') {
            if(isVowel(s[x])) vol ++;
            x++;
        }

        for (int i = x + 1, j = i; i < s.size(); i = j + 1) {
            j = i;
            int v = 0;
            while (j < s.size() && s[j] != ' ') {
                if (isVowel(s[j])) v++;
                j++;
            }
            if (v == vol) {
                reverse (s.begin() + i, s.begin() + j);
            }
        } return s;
    } 
};