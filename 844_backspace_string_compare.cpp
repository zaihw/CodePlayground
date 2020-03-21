class Solution {
private:
    void removeBackSpaces(string &s){
        for (int i=0; i<s.size(); i++){
            if (s[i]=='#'){
                //if S[i] is the first element, delete S[i]
                //if s[i] is not the first element, delete s[i] and the element before  it
                int backSteps = i>0 ? 2 : 1;
                s.erase(i-backSteps+1, backSteps);
                //reindex i to check next element 
                i-=backSteps;
            }
        }
    }
public:
    bool backspaceCompare(string S, string T) {
        removeBackSpaces(S);
        removeBackSpaces(T);
        return S==T;
    }
};