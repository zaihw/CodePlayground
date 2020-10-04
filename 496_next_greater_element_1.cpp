class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        // initialize res vector with -1
        vector<int> res(len1, -1);
        
        for (int idx1=0; idx1<len1; idx1++){
            // find idx2 in nums2, which makes nums2[idx2]==nums1[idx1]
            int idx2=0;
            for (idx2; idx2<len2; idx2++){
                if (nums2[idx2]==nums1[idx1]){
                    break;
                }
            }
            // partial loop nums2, find next greater element
            for (; idx2<len2;){
                if (nums2[idx2] > nums1[idx1]){
                    res[idx1]=nums2[idx2];
                    break;
                } else {
                    idx2++;
                }
            }
        }
        return res;
    }
};