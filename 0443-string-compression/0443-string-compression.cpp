class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, index = 0;
        int n = chars.size();

        while (i < n) {
            int curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                count ++;
                i++;
            }
            chars[index++] = curr;
            
            if (count > 1) {
                string str = to_string(count);
                for (char x : str) {
                    chars[index++] = x;
                }
            }
        } return index;
    }
};