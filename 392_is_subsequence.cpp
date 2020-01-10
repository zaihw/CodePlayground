class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size()==0)    return true;
        
        int ps=0, pt=0;
        //end condition: 
        //1. find all elements in s, return true
        //2. didnt find all elements in s after finish loop thru t return false
        while(pt<t.size()){
            if(s[ps]==t[pt]){
                ps++; pt++;
                if (ps>=s.size())   return true;
            }else{
                pt++;
            }
        }
        return false;
    }
};