class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx = 0;
        for(int x: nums) mx = max(mx, x);
        int ans = 0;
        while(k--) {
            ans += mx;
            mx++;
        }
        return ans;
    }
};