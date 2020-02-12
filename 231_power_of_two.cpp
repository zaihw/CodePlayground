class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<1)    return false;
        if (n==1)   return true;
        while(n>=2){
            if (n%2!=1){
                n/=2;
            } else {
                return false;
            }
        }
        return true;  
    }
};