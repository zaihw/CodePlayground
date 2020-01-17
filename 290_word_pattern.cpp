class Solution {
private:
    //convert continuous string to vector of strings
    std::vector<string> split(string str, char delimiter){
        std::vector<string> internal;
        stringstream ss(str);
        string tok;
        
        while (getline(ss, tok, delimiter)){
            internal.push_back(tok);
        }
        return internal;
    }
    
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> dict_pattern;
        unordered_map<string, char> dict_string;
        int len=pattern.size();
        std::vector<string> strs=split(str, ' ');
        
        if (len!=strs.size())   return false;
        
        for (int i=0; i<len; i++){
            char& ch=pattern[i];
            string& s=strs[i];
            // initialize dict_pattern<ch, s>
            if (dict_pattern.find(ch) == dict_pattern.end()){
                dict_pattern[ch]=s;
            }
            //initialize dict_string<s, ch>
            if (dict_string.find(s) == dict_string.end()){
                dict_string[s]=ch;
            }
            //compare ch<->string mapping one by one
            if (dict_pattern[ch] != s || dict_string[s] != ch){
                return false;
            }
        }
        return true;
    }
};