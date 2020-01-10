class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if (cost.size()<2) return 0;
        int i=2, pre=0, pos=0;
        while(i<=cost.size()){
            int tmp;
            tmp=pos;
            pos=min(pre+cost[i-2], pos+cost[i-1]);
            pre=tmp;
            i++;
        }
        return pos;
    }
};