class Solution {
public:
    //function to swap value in mem address
    void swap(int* pl, int* pr){
        int tmp;
        tmp=*pl;
        *pl=*pr;
        *pr=tmp;
    }
    void sortColors(vector<int>& nums) {
        int p1=0;   //upper bound of 0 group
        int p2=nums.size()-1;   //lower bound of 2 group
        for (int i=0; i<=p2; i++){
            //similar like quick sort
            //if a[i]==0, swap it with a[p1] and increment p1 to move to next mem block
            //if a[i]==2, swap it with a[p2] and decrement p2 to move to prev mem block, then decrease i
            if (nums[i]==0){
                swap(&nums[p1], &nums[i]);
                p1++;
            }
            if (nums[i]==2){
                swap(&nums[p2], &nums[i]);
                p2--;
                i--;
            }
        }
    }
};