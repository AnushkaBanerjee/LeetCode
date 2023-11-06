class Solution {
public:
    
   void  helper(vector<int>& nums,int idx,vector<vector<int>>&v,vector<int>temp)
      
    {
        if(idx == nums.size()){
            v.push_back(temp);
            return;
        }
     
        helper(nums,idx+1,v,temp);//not pick
        temp.push_back(nums[idx]);
        helper(nums,idx+1,v,temp);//one line missing
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //we need tp store the vectors in a vector
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(nums,0,finalAns,ans);
        return finalAns;
        
    }
};