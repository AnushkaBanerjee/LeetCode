class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noZ = 0,noO = 0,noT = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            if(nums[i] == 0) noZ++;
            if(nums[i] == 1) noO++;
            if(nums[i]== 2) noT++;
        }
        
        for(int i = 0;i < noZ;i++) nums[i] = 0;
        for(int i = noZ;i < noZ+noO;i++) nums[i] = 1;
        for(int i = noZ + noO;i < n;i++) nums[i] = 2;
    }
};