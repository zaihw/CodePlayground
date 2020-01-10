class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if (n==0) return 0;
        if (n==1) return nums[0];
        int pre=0, pos=nums[0];
        for (int i=2; i<=n; i++){
            int tmp=pos;
            pos=max(pre+nums[i-1], pos);
            pre=tmp;
        }
        return pos;
        
        //***BAD SOLUTION DONT KNOW WHY***//
        //dp[i] stands for max amount get after travel thry i+1 houses
        //dp[i] = max(dp[i-1], dp[i-2]+nums[i])
        //std::vector<int> dp(n,0);
        //if (n>=2) {
        //    dp[0]=nums[0];
        //    dp[1]=max(nums[0], nums[1]);
        //}
        //
        //for (int i=2; i<n; i++){
        //    dp[i]=max(dp[i-1], dp[i-2]+nums[i]);
        //}
        //return dp[n-1];
  
    }
};