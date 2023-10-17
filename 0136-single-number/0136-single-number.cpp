class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int singleOne = 0;
        if(n == 1) return nums[0];
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i+=2){
            if(nums[i]!=nums[i+1]) {
                singleOne = nums[i];
                break;
            }
        }
        return singleOne;
    }
};