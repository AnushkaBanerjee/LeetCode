class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        if(n==2){
            if(target == nums[0]) return 0;
            else if(target == nums[1]) return 1;
            else return -1;
        }
        //task 1 : to find pivot elt or index
        int pivot = -1;//smallest elt
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(mid==0) lo = mid+1;
            else if(mid == n-1) hi =  mid - 1;
            //might go index out of bound
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){//first element
                pivot = mid;
                break;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){//largest element
                pivot = mid+1;
                break;
            }
            else if(nums[mid]>nums[hi]) lo = mid + 1;
            else hi = mid-1;
            
        }  
        
        if(pivot == -1){//no rotation
            lo = 0;
            hi = n-1;
            //normal Binary Search on full array
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi =  mid-1;
                else lo = mid + 1;
                
            }
            
            return -1;
            
        }
        
        //searching target
        if(target >= nums[0] && target <= nums[pivot-1]){
            lo = 0;
            hi = pivot-1;
            //normal Binary Search
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi =  mid-1;
                else lo = mid + 1;
                
            }
            
        }
            
        else if(target >= nums[pivot] && target <= nums[n-1]){
            lo = pivot;
            hi = n-1;
            //normal Binary Search
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target) hi =  mid-1;
                else lo = mid + 1;
            }
        
        }
        return -1;
    }
};