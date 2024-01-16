class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = prices.size()-1;
        int j = i-1; 
        int maxp = 0;
        while(j >= 0){
            if(prices[i] - prices[j]>0) {
                maxp += prices[i]-prices[j];
                i--;
            }
            else i = j;
            j--;
        }
        return maxp;
    }
};