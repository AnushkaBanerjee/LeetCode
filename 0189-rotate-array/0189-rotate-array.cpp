class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if(k > n) return;
        //reverse k elements from end
        reverse(nums.end()-k,nums.end());
        //reverse n-k elements from beginning
        reverse(nums.begin(),nums.end()-k);
        //reverse the entire array
        reverse(nums.begin(),nums.end());
    }
};