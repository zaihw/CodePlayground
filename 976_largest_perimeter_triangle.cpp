class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        //check size
        int len=A.size();
        if (len<3) return 0;
        //sort vector
        sort(A.begin(), A.end());
        //check triangle
        //select two longest edge and check if the third longest edge is > the delta of the two longest edge
        for (int i=len-1; i>=2; ){
            if (A[i-2]>A[i]-A[i-1]){
                return A[i]+A[i-1]+A[i-2];
            } else {
                i--;
            }
        }
        return 0;
    }
};