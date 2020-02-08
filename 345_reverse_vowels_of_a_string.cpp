class Solution {
public:
    string reverseVowels(string s) {
        list <char> vowels;
        set <char> vows;
        vows.insert('a');
        vows.insert('e');
        vows.insert('i');
        vows.insert('o');
        vows.insert('u');
        vows.insert('A');
        vows.insert('E');
        vows.insert('I');
        vows.insert('O');
        vows.insert('U');
        string res;
        //use list 'vowels' to store vowels in s in original sequence
        //use set 'vows' as a look up table
        //compare 's' with 'vow' to generate 'vowels' 
        for (int i=0; i<s.size(); i++){
            if(vows.find(s[i]) != vows.end()){
                vowels.push_back(s[i]);
            }
        }
        //check if elements in 's' appears in set 'vows', if yes, push the reversed vowels in 'vowels' to res
        //if no, push s[i] into res
        //build res using 's' and 'vowel'
        for (int i=0; i<s.size(); i++){
            if(vows.find(s[i]) != vows.end()){
                res.push_back(vowels.back());
                vowels.pop_back();
            } else {
                res.push_back(s[i]);
            }
        }
        return res;
    }
};