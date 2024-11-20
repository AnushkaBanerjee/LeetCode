class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        //take extra space for tracking
        vector<int>row(m,0);
        vector<int>col(n,0);
        
        //traverse matrix and set the elements at extra space to 1 if '0' is encountered
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                if(matrix[i][j] == 0){
                    //set row element to 1
                    row[i] = 1;
                    //set col elemeny to 1
                    col[j] = 1;
                }
            }
        }
        
        //traverse again and change the matrix elements
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                if(row[i]||col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};