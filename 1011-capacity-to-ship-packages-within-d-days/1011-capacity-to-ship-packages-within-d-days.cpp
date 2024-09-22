class Solution {
public:
    int daysReq(vector<int>& weights,int capacity){
        int d = 1,load = 0;
        for(auto it :  weights){
            if(load + it > capacity){
                d += 1;
                load = it;
            }
            else{
            load += it;
        }
        }
        
        return d;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low <= high){
            int mid = (low+high)/2;
            if(daysReq(weights,mid) <= days)
                high = mid-1;
            else 
                low = mid+1;
        }
        return low;
    }
};