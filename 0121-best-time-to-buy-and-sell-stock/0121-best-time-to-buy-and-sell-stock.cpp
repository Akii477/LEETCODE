class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval = INT_MAX;
        
        int profit  = 0;
        
        for(int i=0 ; i<prices.size();i++)
        {
            minval = min(minval, prices[i]);
            
            profit = max(profit, prices[i]-minval);
        }
        return profit;
    }
};