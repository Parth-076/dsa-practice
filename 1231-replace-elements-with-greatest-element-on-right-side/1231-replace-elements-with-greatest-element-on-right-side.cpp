class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        int rightmax = -1;
        int valu;

        for(int i = n-1; i >= 0; i--) {
            valu = arr[i];
            arr[i] = rightmax;
            rightmax = max(rightmax, valu);
        }
        return arr;
    }
};