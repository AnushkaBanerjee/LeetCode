class Solution {
public:
    void sortColors(vector<int>& nums) {
       //Dutch Flag Algorithm
        //one pass solution
        int lo=0,mid=0,hi=nums.size()-1;
        //1)think about mid
        //2)0 to lo-1->0 , hi+1 to end->2
        while(mid<=hi){
            if(nums[mid]==2){
                
                swap(nums[mid],nums[hi]);
                hi--;    
            }
            else if(nums[mid]==0){
                swap(nums[mid],nums[lo]);
                mid++;
                lo++;
            }
            else mid++;
        }
        
        return;
    }
};