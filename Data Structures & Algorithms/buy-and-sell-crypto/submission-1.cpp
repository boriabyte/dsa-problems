class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxPrf = 0;
        int l = 0, r = 1;
        
        while(r < prices.size()){
            if(prices[l] < prices[r]){
                int profit = prices[r] - prices[l];
                if(profit > maxPrf){
                    maxPrf = profit;
                }
            } else {
                l = r;
            }

            r++;
        }

        return maxPrf;
    }
};
