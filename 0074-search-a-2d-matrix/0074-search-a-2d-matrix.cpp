class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int start = 0;
        int end = m*n-1;
        int mid = start + (end-start)/2;

        while(start<=end){
            int rowIndex = mid / m;
            int colIndex = mid % m;

            if(matrix[rowIndex][colIndex] == target){
                return true;
            }
            if(matrix[rowIndex][colIndex] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
        return false;
        
    }
};