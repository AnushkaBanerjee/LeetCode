class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //optimal approach using two pointers
        
        int n = nums.size();
        
        int j = -1;
        
        
        //find the first occurence if 0 in the array
        for(int i = 0;i < n;i++){
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }
        if(j == -1) return;
        
        for(int i = j+1;i < n;i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};