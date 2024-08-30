class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
             int n = nums.size();
        int totalSum = 0;
        for(auto it:nums){
            totalSum += it;
        }
        int preSum = 0;
        //finding rem and matching
        for(int i = 0;i < n;i++){
            
            if(preSum * 2 == (totalSum - nums[i])) return i;
            preSum += nums[i];
        }
        return -1;
    }
};