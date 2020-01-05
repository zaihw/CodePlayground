class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<vector<int>> ans;  //2d vector<vector<int>> to store return value
        
        //loop to generate rows
        for (int i=0; i<numRows; i++)
        {
            std::vector<int> sub;  //1d vector<int> to store each row
            //loop to generate elements of each row
            //1st row
            if (i==0)
            {
                sub.push_back(1);
            }
            //2nd row and after
            else
            {
                sub.push_back(1);   //generate 1st element
                //generate elements except 1st and last
                for (int j=0; j<ans[i-1].size()-1; j++)
                {
                    sub.push_back(ans[i-1][j]+ans[i-1][j+1]);
                }
                sub.push_back(1);   //generate last element
            }
            ans.push_back(sub);
        }
        return ans;
    }
    
};