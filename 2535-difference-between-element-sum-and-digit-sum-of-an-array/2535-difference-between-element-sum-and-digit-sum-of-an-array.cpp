class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
         int n = nums.size();
        //elementSum
        int sum = 0;
        for(int i = 0;i < n;i++){
            sum+=nums[i];
        }
        //digitSum
        int dSum = 0,lastDigit;
        for(int i = 0;i < n;i++){
            while(nums[i]>0){
                lastDigit = nums[i]%10;
                dSum+=lastDigit;
                nums[i] = nums[i]/10;
            }
        }
        //absolute difference
        return (abs(sum-dSum));
    }
};