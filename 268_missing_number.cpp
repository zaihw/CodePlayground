class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0, tmp=0;
        res=(0+nums.size()+1)*nums.size()/2;
        for (int i=0; i<nums.size(); i++){
            tmp+=nums[i];
        }
        res-=tmp;
        return res;
    }
};