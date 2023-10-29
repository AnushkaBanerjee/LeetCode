class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(target == nums[mid])  return true;
            else if( nums[lo]  == nums[mid] && nums[mid] == nums[hi]){
                hi--;
                lo++;
            }
            
            else if(nums[mid] <= nums[hi]){//mid - hi is sorted
                if(target >= nums[mid] && target <= nums[hi]) lo =  mid + 1;
                else hi = mid-1;
            }
            else{
                //lo - mid
                if(target >= nums[lo] && target <= nums[mid]) hi = mid - 1;
                else lo = mid + 1;
            }
            
        }
        
        return false;
            
    }
};