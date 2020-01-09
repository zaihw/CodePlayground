class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size()<2)    return;
        k=k%nums.size();
        //find new node
        //rotate subarray before and after node 
        //rotate whole array
        int start_l=0, end_l=nums.size()-k-1, start_r=nums.size()-k, end_r=nums.size()-1, start=0, end = nums.size()-1, tmp;
        while (start_l<end_l){
            tmp=nums[start_l];
            nums[start_l++]=nums[end_l];
            nums[end_l--]=tmp;
        }
        while (start_r<end_r){
            tmp=nums[start_r];
            nums[start_r++]=nums[end_r];
            nums[end_r--]=tmp;
        }
        while (start<end){
            tmp=nums[start];
            nums[start++]=nums[end];
            nums[end--]=tmp;
        }

        return;
        
    }
};