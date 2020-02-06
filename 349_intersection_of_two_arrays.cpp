class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //precheck array size
        if (nums1.size()<1){
            return nums1;
        } else if (nums2.size()<1){
            return nums2;
        } else{
            //hash nums1 and check if elements in nums2 exists in hash_set
            unordered_set <int> hash_set(nums1.begin(), nums1.end());
            vector <int> res;
            for (auto& it : nums2){
                if (hash_set.count(it)){
                    res.push_back(it);
                    //erase element if already checked
                    hash_set.erase(it);
                }
            }
            return res;
        } 
    }
};