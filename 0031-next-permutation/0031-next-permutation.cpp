class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();
        //find the break point
        for(int i = n-2;i >= 0;i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        // If break point does not exist:
    if (idx == -1) {
        // reverse the whole array:
        reverse(nums.begin(), nums.end());
        return;
    }
        //find the immediate greater element in the next half.
        for(int i = n-1;i >= idx+1;i--){
            if(nums[i]>nums[idx]){
                int temp = nums[i];
                nums[i] = nums[idx];
                nums[idx] = temp;
                break;
            }
        }
        //reverse the other half
        reverse(nums.begin()+idx+1,nums.end());
    }
};