class Solution {
public:
    bool isPalindrome(int x) {
        int revNum = 0;
        int originalNum = x;
        while(x > 0){
            int lastDigit = x%10;
            if(revNum > INT_MAX/10 || revNum < INT_MIN /10) return false;
            revNum = (revNum * 10) + lastDigit;                
            x = x / 10;
        }
        
        if(revNum == originalNum){
            return true;
        }
        else{
            return false;
        }
    }
};