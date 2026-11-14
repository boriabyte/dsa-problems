class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxPrf = 0;

        for(int i = 0; i < prices.size() - 1; i++){
            for(int j = i + 1; j < prices.size(); j++){
                int profit = prices[j] - prices[i];
                if(profit > maxPrf){
                    maxPrf = profit;
                }
            }
        }

        return maxPrf;
    }
};
