class Solution {
public:
   bool isPalindrome(string s) {
        int left = 0, right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left])) //The isalnum function checks whether a character is alphanumeric, meaning it is either a letter (uppercase or lowercase) or a digit.
                left++;
            else if(!isalnum(s[right])) 
                right--;
            else if(tolower(s[left])!=tolower(s[right])) //This converts the character at the left index of the string s to lowercase, if it is an uppercase letter. It ensures the comparison between left and right characters is case-insensitive.
                return false;
            else {
                left++; 
                right--;
            }
        }
        return true;
    }
};