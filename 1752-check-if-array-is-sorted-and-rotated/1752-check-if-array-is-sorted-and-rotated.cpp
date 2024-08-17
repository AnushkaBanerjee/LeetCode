class Solution {
public:
    bool check(vector<int>& arr) {
        int count = 0;
        int n = arr.size();
        for(int i = 0;i < n - 1;i++){
            if(arr[i] > arr[i+1]) count++;
        }
        if(arr[n-1] > arr[0]) count ++;
        
        if(count > 1) return false;
        else return true;
    }
};