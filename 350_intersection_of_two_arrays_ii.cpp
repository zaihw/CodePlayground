class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //sort both array small->big
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector <int> res;
        int index=0;
        bool end=false;
        //end condition: reaches end of either nums1 or nums2
        //two pointer: i in nums1 and index in nums2
        for (int i=0; i<nums1.size() && !end; i++){
            //check all elements from nums2[index] to nums2[nums2.size()]
            while(index<nums2.size() && nums1[i]>nums2[index])
                index++;
            //reached end of nums2
            if (index==nums2.size()){
                end=true;
            } else if (nums1[i]==nums2[index]){
                //found common element
                res.push_back(nums1[i]);
                index++;
            }
        }
        return res;
    }
};