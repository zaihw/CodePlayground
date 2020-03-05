class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        //create a new vector and use two index to fill in elements
        int odd=1, even=0;
        std::vector<int> res(A.size());
        for (int i=0; i<A.size(); i++) {
            if (A[i]%2==0){
                res[even]=A[i];
                even+=2;
            } else {
                res[odd]=A[i];
                odd+=2;
            }
        }
        return res;
    }
};