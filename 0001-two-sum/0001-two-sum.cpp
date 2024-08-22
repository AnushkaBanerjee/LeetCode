class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //complexity : O(n log n)
        int n = nums.size();
        map <int,int> mpp;
        for(int i = 0;i < n;i++){
            int moreNeeded = target - nums[i];
            if(mpp.find(moreNeeded) != mpp.end()){
                return {mpp[moreNeeded],i};
            }
             mpp[nums[i]] = i;
        }
       
        return {-1,-1};
    }
};