class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        //get size of original matrix
        int row = nums.size();
        int column = nums[0].size();
        //define new matrix, each row have same length
        std::vector<std::vector<int>> res(r,std::vector<int>(c));
        if (row*column != r*c){
            //detect error
            return nums;
        } else {
            for (int i=0; i<row; i++){
                for (int j=0; j<column; j++){
                    //reindexing
                    int r_n = (i*column+j)/c;
                    int c_n = (i*column+j)%c;
                    res[r_n][c_n]=nums[i][j];
                }
            }
        }
        return res;
    }
};