class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //brute force
        vector<int>temp;
        int n = nums.size();
        
        for(int i = 0;i < n;i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        
        
        int tempSize = temp.size();
       

        for(int i = 0;i < tempSize ;i++){
            nums[i]  = temp[i];
        }
        
        for(int i = tempSize ;i<n;i++){
            nums[i] = 0;
        }
    }
};