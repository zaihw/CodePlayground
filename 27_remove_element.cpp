class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //two pointers starts from 0
        int fast = 0, slow = 0;
        while (fast<nums.size()){
            if (nums[fast] != val){
                nums[slow++] = nums[fast];
            }
            fast++;
        }
        return slow;
    }
};