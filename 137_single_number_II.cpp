class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count[32] = {0};  //store 'int' in binary format
        int result = 0; //initialize result with 0
        
        //specify position to check number of ones (backwards) 
        for (int i=0; i<32; i++)
        {
            //check number of ones at position specified by outter loop of all nums (top-down)
            //1st loop check if binary value of nums[0] if 1 at position 32
            //n-th loop check if binary value of nums[n-1] is 1 at position 32
            for(int j=0; j<nums.size(); j++)
            {
                //sum up number of ones
                if((nums[j]>>i) & 1)
                {
                    count[i]++;
                }
            }
            //remove binary ones from repeated nums[] and move left to original position
            result |= ((count[i]%3) << i);
        }
        return result;
    }
};