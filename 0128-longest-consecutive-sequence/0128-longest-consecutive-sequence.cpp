class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(),nums.end());
        int lastSmallest = INT_MIN;
        int cnt = 1;
        int longest = 1;
        for(int i = 0;i < n;i++){
            if((nums[i] - 1 ) == lastSmallest){
                cnt+=1;
                lastSmallest = nums[i];
            }
            else if(nums[i] != lastSmallest){
                cnt = 1;
                lastSmallest = nums[i];
            }
            longest = max(longest,cnt);
        }
        return longest;
    }
};