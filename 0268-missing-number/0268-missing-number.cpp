class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //better solution
        
        int n = nums.size();
        
        vector<int>hash;
        
        for(int i = 0;i <= n;i++){
            hash.push_back(0);
        }
        
        //increasing the hash values of elements present
        
        for(int i = 0;i < n;i++){
            hash[nums[i]]++;
        }
        
        //finding missing element
        for (int i = 0; i <= n; i++) {
         if (hash[i] == 0) {
            return i;
            }
        }
        
        return -1;
        
    }
};