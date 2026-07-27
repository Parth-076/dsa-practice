class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto curr : s) {
            
            if (curr == '(' || curr == '{' || curr == '[') {
                st.push(curr);
            } else {
                if (st.empty()) return false;
                char currtop = st.top();
                if (curr == ')' && currtop == '(') st.pop();
                else if (curr == ']' && currtop == '[') st.pop();
                else if (curr == '}' && currtop == '{') st.pop();
                else return false;
            }
        }
        return st.empty();
      
    }
};