class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int cnt = 0;
        int prefSum = 0;
        for(int i = 0;i < n;i++){
            prefSum += nums[i];
            int rem  = prefSum - k;
            // Add the number of subarrays to be removed:
            cnt+=mpp[rem];
              // Update the count of prefix sum
        // in the map.
        mpp[prefSum] += 1;
            
        }
        return cnt;
    }
};