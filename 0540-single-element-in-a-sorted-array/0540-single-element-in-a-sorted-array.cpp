class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 1;
        int end = nums.size() - 2;
        int mid = start + (end - start) / 2;
        int n = nums.size();
        // for single element
        if (n == 1){
            return nums[0];
        }
        // for the first element in array
        if (nums[0] != nums[1]){
            return nums[0];
        }
        // for last element in array
        if (nums[n - 1] != nums[n - 2]){
            return nums[n - 1];
        }

        while (start <= end) {
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }
            // we are in left
            if (mid % 2 == 1 && nums[mid] == nums[mid - 1] ||
                mid % 2 == 0 && nums[mid] == nums[mid + 1]) {
                start = mid + 1;
            }
            // we are in right
            else end = mid - 1;
             mid = start + (end - start) / 2;
        } 
        return -1; 
    }
};