class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> powSet;
        for (int num = 0; num < (1 << n); num++){
            vector<int>subset;
            for(int i = 0;i < n;i++){
                if(num & (1 << i))
                    subset.push_back(nums[i]);
            }
            powSet.push_back(subset);
        }
        return powSet;
    }
};