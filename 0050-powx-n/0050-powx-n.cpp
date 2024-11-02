class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long storePow = n;
        if(storePow < 0) storePow *= -1;
        while(storePow){
            //if n is odd
            if(storePow % 2){
                ans = ans*x;
                storePow-= 1;
            }
            //if n is even
            else{
                x = x*x;//x keeps storing the multiplied values of x
                storePow/= 2;
            }
        }
        if(n < 0) return (double)(1.0)/(double)ans;
        else return ans;
    }
};