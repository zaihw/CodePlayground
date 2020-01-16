class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())   return false;
        //use a size=26 vector as hash table, initialize to be 0
        vector<int> letters(26, 0);
        for (auto item : s){
            letters[item - 'a']++;
        }
        for (auto item : t){
            letters[item - 'a']--;
        }
        for (auto letter : letters){
            if (letter != 0){
                return false;
            }
        }
        return true;
        
    }
};