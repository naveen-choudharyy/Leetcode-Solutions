class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col= matrix[0].size();


        vector <int> result;
        int d=0;

        while(d< row+col -1){
            if(d % 2 ==0){
                int i = d, j=0;
                if(i>=row){
                     i = row-1;
                     j = d-row+1;

                }
                while(i>=0 && j<col){
                    result.push_back(matrix[i][j]);
                    i--;
                    j++;
                }

            }
            else{
                int i = 0, j=d;
                if(j>=col){
                     i = d-col+1;
                     j=col-1; 
                }
                while(i<row && j>=0){
                    result.push_back(matrix[i][j]);
                    i++;
                    j--;
                }
            }
            d++;

        }
        
        return result;

    }
};