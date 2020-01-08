class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //check empty array
        if (prices.size()==0)   return 0;
        //use slow(buy) and fast(sell) pointer
        //buy seek min, sell seek max
        //so if sell<buy, move buy to sell, and sell++
        int buy=0, sell=0;
        int res=0;
        //end condition, sell=prices[-1]
        for (;sell<=prices.size()-1; sell++){
            if (prices[sell]<prices[buy]){
                buy=sell;
            }else{
                res=std::max(res, prices[sell]-prices[buy]);
            }
            //sell++;
        }
        return res;
    }
};