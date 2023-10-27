class Solution {
public:
        int reverse(int x) {
        
        long long int t = x;
        
        long long int rev = 0;
        while(t != 0){
            // While t is not equal to 0, 
            int a = t % 10; // store last digit of the t
            rev = (rev * 10) + a; // and add a to the rev 
            t = t/10;
        }
        // Finally we get reverse number
        return rev;
    }
    
    bool isPalindrome(int x) {
        // If negative number return false;
        if(x < 0){
            return false;
        }
        
        int t = reverse(x);
        // reverse it and compare with x if same return true else false
        if(t == x){
            return true;
        }
        else{
            return false;
        }
    }
    
};