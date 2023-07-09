class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        cout<<s<<endl<<t<<endl;
        if(s==t)return true;
        else return false;
    }
};