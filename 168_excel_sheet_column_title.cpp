class Solution {
private:
    string digToChar(long long n){
        string ret;
        while(n>0){
            //convert int to char and insert to the begining of string
            char ch='A'+(n-1)%26;
            ret.insert(ret.begin(), ch);
            //subtract (n-1)%26, which is the value represented by the previously generated string element
            n-=(n-1)%26;
            n/=26;
        }
        return ret;
    }
public:
    string convertToTitle(int n) {
            return digToChar(n);
        
    }
};