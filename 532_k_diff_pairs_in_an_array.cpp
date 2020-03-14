class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k<0)    return 0;
        unordered_map<int, int> N;
        for(auto n:nums)
            N[n]++;
        int res=0;
        if(k){
            for (auto n:N){
                //when k!=0
                //loop thru map and compare key value
                if(N.count(n.first+k))  res++;
                if(N.count(n.first-k))  res++;
            }
        } else {
            for (auto n:N){
                //when k!=0
                //loop thru map compare value aka 'occurance' of each key value
                if(n.second>1) res+=2;
            }
        }
        //previous steps counted twice
        return res/2;
    }
};