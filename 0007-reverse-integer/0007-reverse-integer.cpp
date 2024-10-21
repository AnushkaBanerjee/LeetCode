class Solution {
public:
    int reverse(int x) {
       int revNum = 0;
       int lastDigit = 0;
   
        while(x){
            lastDigit = x%10;
            if((revNum > INT_MAX/10) || (revNum < INT_MIN/10)) return 0;//res*10 might cause the operation to overflow the representable range of int
            revNum = (revNum * 10)+lastDigit;
             x = x/10;
            
        }
      return revNum;
    }
};