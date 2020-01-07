class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size()==0) return 0;
        
        int start = 0;  //index of begin of subarray
        int end = nums.size()-1;    //index of end of subarray
        
        //binary search
        //end condition: search array size is 1
        while(start<=end){  //when end goes to start or start goes to end, return start (target not in array)
            int mid = start+(end-start)/2;
            if (target == nums[mid]){
                return mid; //found target, return index
                break;
            }
            else if (target > nums[mid]){   //if true, target can not exist between start:mid including nums[mid], so start=mid+1
                start = mid + 1;
            }
            else{
                end = mid - 1;  //target can not exist between mid:end, including mid, so end=mid-1
            }
        }
        return start;
    }
};