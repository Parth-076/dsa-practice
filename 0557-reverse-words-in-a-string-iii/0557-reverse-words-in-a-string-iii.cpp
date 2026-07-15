class Solution {
public:
    string reverseWords(string s) {
        int index = 0 , i = 0, j = 0;
        int n = s.size();
        while ( i < n ) {

            while (j < n && s[j] != ' ') j++;
            index = j + 1;
            j--;
            while( i < j) {
                swap (s[i], s[j]);
                i++;
                j--;
            }
            i = index;
            j = i;
        }
        return s;
    } 
};