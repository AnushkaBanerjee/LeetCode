class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long storePow = n;
        if(storePow < 0) storePow *= -1;
        while(storePow){
            if(storePow % 2){
                ans = ans*x;
                storePow-= 1;
            }
            else{
                x = x*x;
                storePow/= 2;
            }
        }
        if(n < 0) return (double)(1.0)/(double)ans;
        else return ans;
    }
};