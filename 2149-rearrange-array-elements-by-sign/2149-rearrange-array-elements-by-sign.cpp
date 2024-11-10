class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);//the answer array 
        int posIn = 0,negIn = 1;
        for(int i = 0;i < n;i++){
            if(nums[i] < 0){
                ans[negIn] = nums[i];
                negIn += 2;      
            }
            else{
                ans[posIn] = nums[i];
                posIn += 2;      
            }
        }
        return ans;     
    }
};