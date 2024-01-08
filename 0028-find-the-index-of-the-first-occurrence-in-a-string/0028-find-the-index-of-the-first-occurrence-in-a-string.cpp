class Solution {
public:
    int strStr(string haystack, string needle) {
     int i = 0;
        int j = 0;
        int idx = -1;
        while (i < haystack.size()) {
            if (haystack[i] == needle[j]) {
                if (j == 0) {
                    idx = i; 
                }
                i++;
                j++;
            } else {
                if (j > 0) {
                    i = idx + 1; 
                    j = 0;
                } else {
                    i++;
                }
            }

            if (j == needle.size()) {
                return idx;
            }
        }

        return -1; 
    }
};