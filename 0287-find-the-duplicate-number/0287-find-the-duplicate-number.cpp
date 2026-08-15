class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // // 1st approach
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == nums[i + 1]) {
        //         return nums[i];
        //     }
        // }

        // return -1;

        // 2nd approach ( Visited Marking)

        int ans = -1;
        for(int i=0; i<nums.size(); i++) {

            int index = abs(nums[i]);

            // Already Visited
            if(nums[index] < 0){
            ans = index;
            break;
            }
            
            // mark visited
            nums[index] *= -1;
        }
        return ans;
    }
};