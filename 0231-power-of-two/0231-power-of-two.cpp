class Solution {
public:
    bool isPowerOfTwo(int n) {
    if(n == 1) return true;
    if(n == 0 || n & 1) return false;
    return isPowerOfTwo(n>>1);
    }
};