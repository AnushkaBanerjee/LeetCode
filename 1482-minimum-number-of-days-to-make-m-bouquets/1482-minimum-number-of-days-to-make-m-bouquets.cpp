class Solution {
public:
    bool possible(vector<int>& arr, int m, int k,int day){
        int n = arr.size();
        int count = 0;
        int noOfB = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] <= day){
                count++;
            }
            else{
                noOfB += count/k;
                count = 0;
            }
        }
         noOfB += count/k;
        return noOfB >= m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long totalFlowers = (long long)m*k;//to overcome overflow condition
        int maxi = *max_element(bloomDay.begin(),bloomDay.end());//finding the max element in the array
        int mini = *min_element(bloomDay.begin(),bloomDay.end());//finding the min element in the array
        
        if(n < totalFlowers) return -1;
        int low = mini,high = maxi;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,m,k,mid)){
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return low;

    }
};