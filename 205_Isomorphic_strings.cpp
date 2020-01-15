class Solution {
public:
    bool isIsomorphic(string s, string t) {
        std::vector<int> v1(256, -1);
        std::vector<int> v2(256, -1);
        
        //Refer ASCII table: '0'=48, 'A'=65, 'a'=97
        //use s[i] as index of v1 and v2
        for (int i=0; i<s.size(); i++){
            if (v1[s[i]] != v2[t[i]]){
                return false;
            }
            v1[s[i]]=i;
            v2[t[i]]=i;
        }
        
        return true;
    }
};