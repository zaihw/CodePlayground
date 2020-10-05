class Solution {
public:
    int hammingWeight(uint32_t n) {
        if (n == 0) return 0;
        int res = 1;
        while (n/2 > 0){
            int tmp = n%2;
            res += tmp;
            n /= 2;
        }
        return res;
    }
};