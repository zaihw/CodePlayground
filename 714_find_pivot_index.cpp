class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //1000 x 10000 < INT_MAX, so no overflow
        //loop thru nums and keep updating l_sum and r_sum from left to right
        //stop when l_sum = r_sum (only works when nums.size>=3)
        //size=0
        if (nums.size()==0)  return -1;
        //size=1
        if (nums.size()==1)  return 0;
        //size=2
        if (nums.size()==2){
            if (nums[0]==0 && nums[1]!=0)   return 1;
            if (nums[1]==0)   return 0;
            if (nums[0]!=0 && nums[1]!=0)   return -1;
        }
        //size>=3
        int l_sum=0; 
        int r_sum=accumulate(nums.begin()+1, nums.end(), 0);
        for(int i=0; i<nums.size()-1;){
            if (l_sum==r_sum){
                return i;
            } else {
                l_sum+=nums[i];
                r_sum-=nums[i+1];
                i++;
            }
        }
        //check the missing last position
        if (l_sum==0)   return nums.size()-1;
        return -1;
    }
};
