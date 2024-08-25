class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadande's algorithm
        int sum = 0;
        int maxi = INT_MIN;
        for(auto it:nums){
            sum += it;
            maxi = max(maxi,sum);
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};