class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = "";
        int j=0 ,k= 0;
        int length = min(word1.size(),word2.size());
        int n = word1.size();
        int m = word2.size();
        for(int i = 0;i < 2*length;i++){
            if(i % 2 == 0){
                word3 += word1[j];
                j++;
            }
            else{
                word3+= word2[k];
                k++;
            }
        }
        
        if(word1.size() < word2.size()){
            word3 += word2.substr(length,word2.length());
        }
        else if(word1.size() > word2.size()){
            word3 += word1.substr(length,word1.length());
        }
         return word3;
    }
};