class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum =0;
        vector <int> result;
        int n = mat.size();
        int i, j;
        i=0, j=0;
        while(i<n && j<n){

           result.push_back(mat[i][j]);
           
             i++;
            j++;
        };
        i=0, j=n-1;
        while(i>=0 && j>=0){
            result.push_back(mat[i][j]);
            i++;
            j--;
        }
        for(int i=0; i<result.size(); i++){
            sum += result[i];
           

           
            };
        if(n%2!=0){
            sum -= mat[n/2][n/2];
        }

        return sum;
    }
};