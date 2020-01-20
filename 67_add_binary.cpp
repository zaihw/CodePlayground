class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.size();
        int blen = b.size();
        bool carry = false;
        string result;
        //build result string
        while( alen>0 || blen>0) {
            //convert to numerical element and do calculation
            int abit = alen<=0 ? 0 : a[alen-1]-'0';
            int bbit = blen<=0 ? 0 : b[blen-1]-'0';
            int cbit = carry ? 1 : 0;
            //bit-wise operation to do calculation
            result.insert(result.begin(), '0' + ((abit+bbit+cbit) & 1) );
            carry = (abit+bbit+cbit>1);
            alen--; blen--;
        }
        //alen==blen && a[0]==1 && b[0]==1 after backwards calcuation
        if (carry){
            result.insert(result.begin(), '1');
        }
        return result;
    }
};