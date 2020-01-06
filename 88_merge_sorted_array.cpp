class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;  //index to loop nums1 non-empty part
        int j=n-1;  //index to loop nums2
        int k=m+n-1;    //index to loop nums1
        
        //end condition: nums2 finished check of all elements
        while (j>=0){
            //check if nums1 have finished check all elements
            if (i<0){
                while(j>=0){
                    nums1[k--]=nums2[j--];
                }
                return;
            }
            //if nums1 have not finished, do comparison and move
            if (nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
        return;
    }
};