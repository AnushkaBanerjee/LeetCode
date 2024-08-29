class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0,cnt2 = 0;
        int elt1  = INT_MIN;
        int elt2 = INT_MIN;
        for(int i = 0;i < n;i++){
            if(cnt1 == 0 && nums[i] != elt2){
                cnt1 = 1;
                elt1 = nums[i];
            }
            else if(cnt2 == 0 && nums[i] != elt1){
                cnt2 = 1;
                elt2 = nums[i];
            }
            else if(elt1 == nums[i]) cnt1++;
            else if(elt2 == nums[i]) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        vector<int>ls;
        int count1 = 0,count2 = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] == elt1) count1++;
            if(nums[i] == elt2) count2++;
        }
        
        int mini = int(n / 3) + 1;
        if(count1 >= mini) ls.push_back(elt1);
        if(count2 >= mini) ls.push_back(elt2);
        
        return ls;
    }
};