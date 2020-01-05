class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int holder; //stores current sum of subarray
        int max = INT_MIN;
        
        //special case when nums.size()==1
        if(n==1)
        {
            return max=nums[0];
        }
        
        //loop to define start position of subarray
        for (int sp=0; sp<n; sp++)
        {
            
            //check of 1st element of subarray is non-negative
            if (nums[sp]<0)
            {
                if (nums[sp]>max)
                {
                    max=nums[sp];
                }
                continue;
            }
            else
            {
                holder=0;
                int ep=0;
                //loop to increment subarray size and find max sum
                do
                {
                    holder += nums[sp + ep];
                    if (holder < max)
                    {
                        ep++;
                        continue;
                    }
                    else
                    {
                        max=holder;
                        ep++;
                    }
                }
                while(ep<n-sp);
            }        
        }
        return max;        
    }
};