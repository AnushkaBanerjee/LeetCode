class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int reverse = 0;
        while(x>0){
            int lastDigit = x%10;
            if(reverse > INT_MAX/10 || reverse < INT_MIN /10)return false;
            reverse= reverse*10 + lastDigit;
            x = x/10;
        }
       if(reverse == num) return true;
       else return false;
        
    }
};