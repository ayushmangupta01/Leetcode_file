class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        // Two Pointer approach
        int low=0 , high = arr.size()-1;

        while(high-low>=k){
            if(x-arr[low] > arr[high]-x){
                low++;
            }
            else{
                high--;
            }
        }
        // print the remaining space for k=4 means low->high
        vector<int>ans;
        for(int i=low; i<=high; i++){
            ans.push_back(arr[i]);
        }
        return ans;
        
    }
};