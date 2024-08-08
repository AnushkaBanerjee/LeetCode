class Solution {
public:
    int fib(int N) {
        // Base Condition.
   if(N <= 1){
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   
   
   return  fib(N-1) + fib(N-2);
    }
};