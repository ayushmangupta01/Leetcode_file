class Solution {
public:
    int pivotInteger(int n) {

        int total_sum = 0;

        for (int i = 1; i <= n; i++) {
            total_sum += i;
        }
        int left_sum = 0;

        for (int i = 1; i <= n; i++) {
            int right_sum = total_sum - left_sum - i;

            if (left_sum == right_sum) {
                return i;
            }
            left_sum += i;
        }
        return -1;
        
    }
};