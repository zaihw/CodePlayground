class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        //use two pointers shrink from both side
        vector<int> res(A.size());
        auto s=begin(A);
        auto e=prev(end(A));
        auto it=end(res);
        while (--it >= begin(res)){
            if (e>s && abs(*e)>abs(*s))
                *it=pow(*e--,2);
            else
                *it=pow(*s++,2);
        }
        return res;
    }
};