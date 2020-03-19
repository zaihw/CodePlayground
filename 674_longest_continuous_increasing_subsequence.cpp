class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size()==0) return 0;
        if (nums.size()==1) return 1;
        int res=1;
        int count=1;
        int f=1, s=0;
        //fast and slow pointer
        while(f<nums.size()){
            if (nums[f]>nums[f-1]){
                f++;
                count++;
            } else {
                s=f;
                f++;
                count=1;
            }
            res=max(res, count);
        }
        return res;
    }
};