class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //if (nums.size()<2)  return;
        unordered_map<int, int> m;
        std::vector<int> result;
        for (int i=0; i<nums.size(); i++){
            //check if 2nd number already in hash table
            if (m.find(nums[i])==m.end()){
                //populate hash table, (target - nums[i]) value as 'key', nums[i] indice as 'value'
                m[target - nums[i]]=i;
            }else{
                //the 2nd element is found, generate output array
                result.push_back(m[nums[i]]);
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};