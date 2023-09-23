class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        while(lo <= hi){
            // int mid = (hi+lo)/2;-->might go out of bound of integers
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) lo = mid+1;
            else hi = mid-1;
        }
        return -1;
        //hi = INT_MAX  and lo = INT_MAX-10
    }
};