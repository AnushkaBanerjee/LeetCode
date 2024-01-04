class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        stringstream sr(s);
        string word;
        string newString;
        while(sr >> word){
           newString = word;
        }
        for(int i = 0;i < newString.length();i++){
            count++;
        }
       return count;
    }
};