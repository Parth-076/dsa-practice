class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        int n = details.size();
        for (auto &x : details) {
            
            int age = stoi (x.substr(11,2));
            count += age > 60;
        }
        return count;
    }
};