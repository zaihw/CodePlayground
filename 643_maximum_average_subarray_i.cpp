class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //initialize sum with sum of first k elements
        int sum=0;
        for (int i=0; i<k; i++){
            sum+=nums[i];
        }
        //initialize maxSum with sum
        int maxSum=sum;
        int len=nums.size();
        //sliding window get max sum
        for (int i=k; i<len; i++){
            maxSum=max(maxSum, sum=sum-nums[i-k]+nums[i]);
        }
        return maxSum/double(k);
    }
};