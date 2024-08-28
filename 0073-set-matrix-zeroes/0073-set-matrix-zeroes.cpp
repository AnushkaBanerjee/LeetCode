class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>rows(n,0);
        vector<int>cols(m,0);
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        // Finally, mark all (i, j) as 0
    // if row[i] or col[j] is marked with 1.
         for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rows[i] || cols[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    return;
        
    }
};