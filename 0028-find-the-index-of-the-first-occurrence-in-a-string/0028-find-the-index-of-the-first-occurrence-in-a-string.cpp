class Solution {
public:
    int strStr(string haystack, string needle) {
     int i = 0;
        int j = 0;
        int idx = -1; // Initialize idx to -1
        while (i < haystack.size()) {
            if (haystack[i] == needle[j]) {
                if (j == 0) {
                    idx = i; // Update idx only on the first match
                }
                i++;
                j++;
            } else {
                if (j > 0) {
                    i = idx + 1; // If mismatch after partial match, reset i to the next index of the last match
                    j = 0;
                } else {
                    i++;
                }
            }

            if (j == needle.size()) {
                return idx; // Return the index of the first occurrence
            }
        }

        return -1; // Return -1 if needle is not part of haystack
    }
};