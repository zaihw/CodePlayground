class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        //loop thru every element in the matrix once
        for(int i = 0;i < matrix.size() - 1; i++) {
            for(int j = 0; j < matrix[0].size() - 1; j++) {
                if (matrix[i][j] != matrix[i + 1][1 + j]) {
                    return false;
                }
            }
        }
        return true;
    }
};