class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         //2,2,1,1,1,2,2   7 4 baar
//         for(int i = 0;i < n;i++){
//             int count  = 1;
//             for(int j = i+1;j < n;j++){
//                 if(nums[i]==nums[j]) count ++;
//             }
//             if(count > (n/2)) return nums[i];
//         }
        
//         return -1;
        
        // the above code has a time complexity of about O(n^2)
    //TLE error
    
        sort(nums.begin(),nums.end());
    return nums[(nums.size()/2)];
        //optimised code
        
    }
    
    
    
};