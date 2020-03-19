class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        const int row=M.size();
        const int column=M[0].size();
        std::vector<std::vector<int>>    res(M);
        //when M is 1x1
        if(row==1 && column==1) return M;
        //when M is 1xX (X>1)
        if (row==1){
            res[0][0]=(M[0][0]+M[0][1])/2;
            res[0][column-1]=(M[0][column-1]+M[0][column-2])/2;
            for (int i=1; i<column-1; i++){
                res[0][i]=(M[0][i-1]+M[0][i]+M[0][i+1])/3;
            }
            return res;
        }
        //when M is Xx1 (X>1)
        if (column==1){
            res[0][0]=(M[0][0]+M[1][0])/2;
            res[row-1][0]=(M[row-1][0]+M[row-2][0])/2;
            for (int i=1; i<row-1; i++){
                res[i][0]=(M[i-1][0]+M[i][0]+M[i+1][0])/3;
            }
            return res;
        }
        //when M is bigger than 2x2
        //4 corners
        res[0][0]=(M[0][0]+M[0][1] +M[1][1]+M[1][0])/4;
        res[0][column-1]=(M[0][column-1]+M[0][column-2]+M[1][column-2]+M[1][column-1])/4;
        res[row-1][0]=(M[row-1][0]+M[row-1][1]+M[row-2][1]+M[row-2][0])/4;
        res[row-1][column-1]=(M[row-1][column-1]+M[row-2][column-1]+M[row-2][column-2]+M[row-1][column-2])/4;
        //4 edges w/o corner
        for (int i=1; i<row-1; i++){
            res[i][0]=(M[i][0]+M[i-1][0]+M[i-1][1]+M[i][1]+M[i+1][1]+M[i+1][0])/6;
        }
        for (int i=1; i<row-1; i++){
            res[i][column-1]=(M[i][column-1]+M[i-1][column-1]+M[i-1][column-2]+M[i][column-2]+M[i+1][column-2]+M[i+1][column-1])/6;
        }
        for (int i=1; i<column-1; i++){
            res[0][i]=(M[0][i]+M[0][i-1]+M[1][i-1]+M[1][i]+M[1][i+1]+M[0][i+1])/6;
        }
        for (int i=1; i<column-1; i++){
            res[row-1][i]=(M[row-1][i]+M[row-1][i+1]+M[row-2][i+1]+M[row-2][i]+M[row-2][i-1]+M[row-1][i-1])/6;
        }
        //center
        for (int i=1; i<row-1; i++){
            for (int j=1; j<column-1; j++){
                res[i][j]=(M[i][j]+M[i][j+1]+M[i-1][j+1]+M[i-1][j]+M[i-1][j-1]+M[i][j-1]+M[i+1][j-1]+M[i+1][j]+M[i+1][j+1])/9;
            }
        }
        return res;
    }
};