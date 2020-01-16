class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> m;
        //check if item is already present in m
        for (auto item:nums){
            if (m.find(item) != m.end()){
                //item found
                return true;
            } 
            m[item]=true;
        }
        return false;
        
    }
};