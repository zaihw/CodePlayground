class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size()==0)   return 0;
        if (needle.size()>haystack.size())  return -1;
        int j=0;
        for (int i=0; i<haystack.size(); i++){
            if (haystack[i]==needle[j]){
                //increment i and j. compare haystack and needle
                j++;
                //found needle in stack, get starting indice in haystack
                if (j==needle.size()){
                    return i-j+1;
                }
            }else{
                //shift start point right 1 step
                //check needle from begin
                i=i-j;
                j=0;
            }
        }
        //did not find needle
        return -1;
        
    }

};