class Solution {
public:
    int mySqrt(int x) {

        long long low = 1, high = x, res = 0;

        while (low <= high) {

            long long mid = low + (high - low) / 2;

            if ((mid * mid) == x) return (int) mid;

            else if ((mid * mid) < x) {

                res = mid;
                low = mid + 1;
            }

            else high = mid - 1;
        }
        return res;
    }
};