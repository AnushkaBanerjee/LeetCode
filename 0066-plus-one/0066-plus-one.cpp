class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size()-1;
        int idx = n;
        
       if(digits[n] < 9){
           digits[n]+=1;
       }
       else{
           digits[n] = 0;
           if(digits.size() == 1){
              reverse(digits.begin(),digits.end());
              digits.push_back(1);
              reverse(digits.begin(),digits.end());
              return digits; 
           }
           for(int i = n-1;i >= 0;i--){
               if(digits[i]!=9 ){
                   digits[i]+=1;
                   break;
               }
            else {
                   digits[i] = 0;
                   if(i == 0){
                       reverse(digits.begin(),digits.end());
                       digits.push_back(1);
                       reverse(digits.begin(),digits.end());
                       return digits;
                   }
               }
           }
           
           }
        
        return digits;
           
       }
};