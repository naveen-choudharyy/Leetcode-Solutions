class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row, col,mid, start=0, end = matrix.size()*matrix[0].size()-1;
        
        while(start<=end){
            mid = end+(start-end)/2;
            row = mid/matrix[0].size();
            col = mid%(matrix[0].size());


            if(matrix[row][col] == target){
                return true;
            }

            else if(matrix[row][col]<target){
                start = mid +1; 
            }
            else{
                end = mid-1;
            }

        }
        return false;
    }
};