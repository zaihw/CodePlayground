class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if (name.size()>typed.size())   return false;
        int i=0, j=0;
        //loop thru typed
        while (j<typed.size()) {
            //j as faster pointer, i as slower pointer
            if (i<name.size() && name[i]==typed[j]) {
                i++;
                j++;
            } else if (i>0 && name[i-1] == typed[j]) {
                j++;
            } else {
                return false;
            }
        }
        //final check if covered all char in name
        return i==name.size();
    }
};