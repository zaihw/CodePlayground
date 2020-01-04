class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority;   //majority element, vector defined as 'int'       
        int count = 0;  //element occurance counter, non-empty array
        
        for (int i=0; i<nums.size(); i++)
        {
            if (count == 0)
            {
                majority = nums[i];
                count++;
            }
            else
            {
                majority == nums[i] ? count++ : count--;
                if (count > nums.size()/2)   return majority; 
            }
        }
        return majority;
    }
};

//http://www.cs.utexas.edu/~moore/best-ideas/mjrty/index.html
//https://en.wikipedia.org/wiki/Boyer-Moore_majority_vote_algorithm