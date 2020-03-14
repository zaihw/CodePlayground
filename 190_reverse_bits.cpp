class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        int count=0;
        while(count<32){
            //move res left and reassign, last position of res is always 0
            //get last element of n and do bit or with res
            //move n right and reassign
            res=(res*2)+(n & 0x1);
            n/=2;
            count++;
        }
        return res;
    }
};