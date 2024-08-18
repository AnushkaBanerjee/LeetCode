class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute force
        set <int> st;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            st.insert(nums[i]);
        }
        
        int setSize = st.size();
        int j = 0;
        for(auto it:st){
            nums[j++] = it;
        }
        
        return setSize;
    }
};