class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size()<2)    return 0;
        //if the price of the next day is higher than previous day
        //get the delta and sum up
        int profit=0;
        for (int i=1; i<prices.size(); i++){
            int delta = prices[i]-prices[i-1];
            if (delta>0){
                profit+=delta;
            }
        }
        return profit;
    }
};