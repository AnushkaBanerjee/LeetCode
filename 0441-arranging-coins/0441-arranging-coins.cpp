class Solution {
public:
    int arrangeCoins(int n) {
        int lo = 1;
        int hi = n;
        while(lo<=hi){
            long long k = lo + (hi-lo)/2;
            long long m = k*(k+1)/2;
            if(m==n) return k;
            if(m>n) hi = k-1;
            else lo = k + 1;
        }
        
        return hi;
    }
};