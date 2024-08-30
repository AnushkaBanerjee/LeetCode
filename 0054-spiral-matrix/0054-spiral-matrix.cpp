class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int right = m-1,left = 0,top = 0,bottom = n-1;
        vector<int>ans;
        while(left <= right && top <= bottom){
            //printing from left to right
            for(int i = left ;i <= right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            //printing top to bottom
            for(int i = top ;i <= bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            //printing from right to left
            if(top <= bottom){
            for(int i = right;i >=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            //printing from bottom to top
            if(left <= right){
            for(int i = bottom ;i >= top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }
    return ans;
        
        }
    };