class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int index=s.size()-1;
        //remove potential empty spaces after last alphabet element
        while(true){
            if (index<0 || s[index]!=' ')
                break;
            index--;
        }
        //index starts decrease from the last non-empty element
        for (int i=index; i>=0; i--){
            if (s[i]==' '){
                break;
            }
            count++;
        }
        return count;
    }
};