class Solution {
public:
      //lower bound
    int lowerBound(vector<int> arr, int x,int n) {
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            // maybe an answer
            if (arr[mid] >= x) {
                ans = mid;
                //look for smaller index on the left
                high = mid - 1;
            }
            else {
                low = mid + 1; // look on the right
            }
        }
       
        return ans;
    }
    
    //upper boound
    int upperBound(vector<int> &arr, int x, int n) {
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            // maybe an answer
            if (arr[mid] > x) {
                ans = mid;
                //look for smaller index on the left
                high = mid - 1;
            }
            else {
                low = mid + 1; // look on the right
            }
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
      
         int n = nums.size();
        int lb = lowerBound(nums,target,n);
        if(lb == n || nums[lb]!= target) return {};
        int ub = upperBound(nums,target,n);
        if((ub-1) == lb) return {lb};
          vector<int>v;
        for(int i = lb;i <= ub-1;i++){
            v.push_back(i);
        }
        return v;
        
    }
};