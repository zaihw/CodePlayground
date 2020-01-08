class Solution {
public:
    vector<int> getRow(int rowIndex) {
        std::vector<int> ans;
        int n = rowIndex;
        long pre = 1;
        ans.push_back(1);
        
        //based on pattern of pascal triangle Cnk = Cnk-1*(n-k+1)/k
        for(int k=1; k<=n; k++){
            long pos = pre*(n-k+1)/k;
            ans.push_back(pos);
            pre=pos;
        }
        return ans;
    }
};