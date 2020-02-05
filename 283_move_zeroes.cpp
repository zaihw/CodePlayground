class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //check nums size
        if (nums.size()<2)  return;
        //check if 0 exists in nums
        int i=0;
        for (i=0; i<nums.size(); i++){
            if (nums[i]==0){
                break;
            } else if (i==nums.size()-1){
                return;
            }
        }
        //start from the first 0
        int slow=i, fast=i+1;
        int tmp;
        while (fast<nums.size()){
            if (nums[fast]!=0){
                tmp=nums[slow];
                nums[slow]=nums[fast];
                nums[fast]=tmp;
                fast++;
                slow++;
            } else {
                fast++;
            }
        }
        return;
    }
};