class Solution {
public:
    int subArrayCount(vector<int>& nums,int targetSum){
        int subArray = 1;
        long long subArraySum = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            if(nums[i]+subArraySum <= targetSum){
                subArraySum += nums[i];
            }
            else{
                subArray++;
                subArraySum = nums[i];
            }
        }
        return subArray;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low <= high){
            int mid = (low+high)/2;
            if(subArrayCount(nums,mid) > k) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};