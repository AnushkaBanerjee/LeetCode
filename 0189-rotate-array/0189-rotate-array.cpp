class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        //the number of rotations if k > n as well as normal cases will be
        k = k % n;
        
        vector<int>temp;
        //take a temporary array for storing the elements to be rotated
        for(int i = n - k; i < n;i++){
            temp.push_back(nums[i]);
        }
        
        //now shift the non-rotated part to the right
        
        for(int i = n - k - 1;i >=0 ;i--){
          nums[i + k] = nums[i];
        }
        
        //putting temp in the array
        for(int i = 0;i < k;i++){
            nums[i] = temp[i];
        }
        
        //time complexity : O(k) + O(n-k) + O(k) = O(n+k)
        
    }
};