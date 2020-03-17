class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //only two possibilities
        //1. two negative, one positive
        //2. three positive
        sort(nums.begin(), nums.end());
        int len=nums.size();
        int res=max(nums[0]*nums[1]*nums[len-1], nums[len-3]*nums[len-2]*nums[len-1]);
        return res;
    }
};