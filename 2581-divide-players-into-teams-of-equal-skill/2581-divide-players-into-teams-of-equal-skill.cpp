class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        sort (skill.begin(), skill.end());
        int n = skill.size();
        long long res = 0;
        int sk = skill[0] + skill[n-1];
        for (int i = 0, j = n - 1; i < j; i++, j-- ) {
            if (skill[i] + skill[j] == sk)
                res += (skill[i] * skill[j]);
            else return -1;
        }
            return res;
    }
};