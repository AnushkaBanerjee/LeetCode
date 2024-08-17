class Solution {
public:
    bool check(vector<int>& arr) {
        
        
        int count = 0;
        int n = arr.size();
        
        //check whether a part of the array is unsorted 
        //if arr[i] > arr[i+1] occurs more than once it means array is unsorted boyh before and after the largest element
        for(int i = 0;i < n - 1;i++){
            if(arr[i] > arr[i+1]) count++;
        }
        
        //it is for the condition where the parts of the array after and before the largest element is sorted but the array as a whole is not sorted
        if(arr[n-1] > arr[0]) count ++;
        
        if(count > 1) return false;
        else return true;
    }
};