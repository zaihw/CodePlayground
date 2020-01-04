class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int holder = 0;
        for (int i=0; i<nums.size(); i++)
        {
            holder^=nums[i];
        }
        return holder;
    }
};

//bitwise XOR operator '^', return 1 if operands are different. one or the other but not both