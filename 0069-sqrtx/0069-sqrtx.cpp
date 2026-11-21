class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;

        int low = 1, high = x, ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long sq = 1LL * mid * mid;

            if (sq == x) {
                return mid;
            } else if (sq < x) {
                ans = mid;      // Valid candidate; try larger
                low = mid + 1;
            } else {
                high = mid - 1; // Too large; search smaller
            }
        }
        return ans;
    }
};
        
   