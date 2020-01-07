class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0) return 0;
        int i=0;
        //fast and slow pointer loop vector
        //if nums[fast]=nums[slow], nums[fast] becomes the new nums[slow], nums[fast] incrememt by 1
        for(int j=1; j<nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};