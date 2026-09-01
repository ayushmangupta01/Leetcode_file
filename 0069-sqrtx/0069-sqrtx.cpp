class Solution {
public:
    int mySqrt(int x) {

        int start = 0;
        int end = x;
        double mid = start + (end - start) / 2;
        int ans = -1;

        while (start <= end) {
            if (mid * mid == x) {
                return mid;
            }
            if (mid * mid > x) {
                end = mid - 1;
            } 
            else{
                ans = mid;
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }

        return ans;
    }
};