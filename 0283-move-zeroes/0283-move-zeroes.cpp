class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //optimal approach using two pointers
        int j = -1;
        //take size of the array
        int n = nums.size();
        //check where the first zero lies in the array and point j to it
        for(int i = 0;i < n;i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }
        //check if there are no zeros
        if(j == -1) return;
        //point i to the next element of j and swap them 
        for(int i  = j+1; i < n;i++){
            if(nums[i]!= 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                //increment position of j
                j++;
            }
            
        }
    }
};