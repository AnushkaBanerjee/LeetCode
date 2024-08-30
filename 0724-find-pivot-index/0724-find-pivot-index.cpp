class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int n = nums.size();
       
        for(int i = 0;i < n;i++){
             int sumL = 0,sumR = 0;
            for(int j = 0 ;j < i;j++){
                sumL += nums[j];
            }
            
            for(int k = i+1;k < n;k++){
                sumR += nums[k];
            }
            if(sumL == sumR) return i;
          
        }
        return -1;
    }
};