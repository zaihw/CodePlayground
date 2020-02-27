class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //create a hash set t to collect all elements in nums
        unordered_set<int> t;
        for(auto x:nums){
            if(t.find(x) == t.end()){
                t.insert(x);
            }
        }
        //loop thru element 1 to nums.size() and check with t
        vector<int> r;
        for (auto i=1; i<=nums.size(); ++i){
            //if i does not present in t, put i in r
            if(t.find(i) == t.end()){
                r.push_back(i);
            }
        }
        return r;    
    }
};