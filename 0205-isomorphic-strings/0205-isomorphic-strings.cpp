class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!= t.length()) return false;
        int n = s.length();
        vector<char> v(127,'#');
        //in this 'v' -> 0-a,1-b
        for(int i = 0;i < n;i++ ){
            int idx = s[i];
           if (v[idx]=='#') v[idx] = t[i];
            else {
                if(v[idx]!=t[i]) return false;
                }        
        }
        
        for(int i = 0;i < v.size() ;i++){
            v[i] = '#';
        }
        
         for(int i = 0;i < n;i++ ){
            int idx = t[i];
           if (v[idx]=='#') v[idx] = s[i];
            else {
                if(v[idx]!=s[i]) return false;
                }        
        }
        
        return true;
            
        
    }
    
};