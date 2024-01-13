class Solution {
public:
    int minSteps(string s, string t) {
        int count_s [26] = {0};
        int count_t [26] = {0};
        int i = 0;
        while(i < s.size()){
            count_t[t[i] - 'a']++;
            count_s[s[i] - 'a']++;
            i++;
        }
        
        
        int ans = 0;
         i = 0;
        int count = 0;
        
        while(i < 26){
            count = (count_t[i] - count_s[i]);
            if(count > 0){
                ans+= count;
            }
            i++;
        }
        
        return ans;
    }
};