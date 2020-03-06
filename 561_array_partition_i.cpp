class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<int>::iterator it;
        it = nums.begin();
        int res=0;
        while(it!=nums.end()){
            res+=*it;
            it++;
            it++;
        }
        return res;
    }
};