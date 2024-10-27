class Solution {
public:
    int reverse(int x) {
        int reverseDigit = 0,lastDigit = 0;
        
       while(x){
           lastDigit = x % 10;
        if(reverseDigit > INT_MAX/10 || reverseDigit < INT_MIN/10) return 0;
           reverseDigit = reverseDigit*10 + lastDigit;
           x = x/10;
          
       } 
      return reverseDigit;
    }
};