class Solution {
public:
    int arrangeCoins(int n) {

        long high = n, low = 1;

        while ( low <= high ) {
            
            long mid = low + (high - low) / 2;

            long coin_req = mid * (mid + 1) / 2;

            if (coin_req == n) return mid;

            else if (coin_req < n) low = mid + 1;

            else high = mid - 1;

        }
        return high;
    }
};