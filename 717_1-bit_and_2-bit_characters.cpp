class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        //if last element must be one-bit
        //the 2nd last element can be one-bit or two-bit
        //parse from beginning one by one, the second last element stops at bits[bits.size()-2]
        int len=bits.size();
        int i=0;
        while(i<len) {
            if (i==len-1 && bits[i]==0){
                return true;
            }
            else if (bits[i]==0){
                i++;
            } else if (bits[i]==1){
                i+=2;
            }
        }
        return false;
    }
};