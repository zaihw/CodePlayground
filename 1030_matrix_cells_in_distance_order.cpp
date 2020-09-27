// defining comparing rule
bool cmp(vector<int>& v1, vector<int>& v2) { 
    return v1[2] < v2[2]; 
}

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        // params
        int row, col;
        vector<vector<int>> res;
        // exception handling
        if (R==0 && C==0) return res;

        // calc dist and populate 2d vector
        for(row = 0;row < R;row++){
            for(col = 0;col < C;col++){
                int dist = abs(row - r0) + abs(col - c0);
                res.push_back({row, col, dist});
            }
        }

        // sort using predefined rule
        sort(res.begin(), res.end(), cmp);
        
        // erase dist
        for(vector<int>& d : res)
            d.erase(d.end()-1);
        
        return res;
    }
};