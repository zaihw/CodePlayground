class Solution {
private:
    long long charToDig(string& s){
        long long sum = 0;
        for (int i=0; i<s.size(); i++){
            int n=s[i]-'A'+1;
            sum=sum*26+n;
        }
        return sum;
    }    
public:
    int titleToNumber(string s) {
        return charToDig(s);
    }
};