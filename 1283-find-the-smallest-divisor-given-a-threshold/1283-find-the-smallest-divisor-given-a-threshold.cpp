class Solution {
public:
    int sumD(vector<int>& nums,int divisor){
       int sum = 0;
        
        for(auto it:nums){
            sum += ceil((double)it/(double)divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if(n > threshold) return -1;
        int low = 1,high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = (low+high)/2;
            if(sumD(nums,mid) <= threshold){
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
                
        }
        return low;
    }
};