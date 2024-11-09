class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algorithm
        int maxi = INT_MIN;
        int sum = 0;
        //-2 -3 4 -1 -2 1 5 -3
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];//0 4 3 1 2 5 2
            maxi = max(sum,maxi);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;//7
    }
};