class Solution {  
public:
    bool isPalindrome(string s) {
        if (s.size()<2) return true;
        s=removeNoise(s);
        for (int i=0; i<s.size()/2; i++){
            if (s[i]!=s[s.size()-i-1]){
                return false;
                break;
            }
        }
        return true;
    }
    
    //remove all nondigit and nonalpha elements
    //convert capital to lower case
    string removeNoise(string& s){
        string a;
        for (int i=0; i<s.size(); i++){
            if (::isalpha(s[i]) || ::isdigit(s[i])){
                a.push_back(::tolower(s[i]));
            }
        }
        return a;
    }
};