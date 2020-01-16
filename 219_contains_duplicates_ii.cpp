class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size()<2)  return false;
        unordered_map<int, int> m;
        //end condition: finish loop and didnt find (duplicates & abs diff <= k) return false 
        for (int i=0; i<nums.size(); i++){
            //loop thru map find if duplicate key exists and abs indice diff is <= k
            if (m.find(nums[i]) != m.end() && i-m[nums[i]]<=k){
                //found duplicate and abs diff <= k
                return true;
            }
            //if key nums[i] is 'new' to map m, set key m[nums[i]] associated value to i (indice)
            m[nums[i]]=i;
        }
        return false;
    }
};