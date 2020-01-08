class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::vector<int> res;
        int i=0, j=numbers.size()-1;
        //two pointers, one from left, one from right
        //move left or right pointer based on comparison: numbers[i]+numbers[j]>target
        while(numbers[i]+numbers[j]!=target){
            if (numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        res.push_back(i+1);
        res.push_back(j+1);
        return res;
        
    }
};