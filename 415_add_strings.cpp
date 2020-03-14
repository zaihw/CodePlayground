class Solution {
public:
    string addStrings(string num1, string num2) {
        //max length can be 5100, so can not convert whole string to int
        //convert each position to int, add up, convert to string from rear end
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string res="";
        while(i>-1 || j>-1) {
            if (i>-1){
                carry+=num1[i]-'0';
            }
            if (j>-1){
                carry+=num2[j]-'0';
            }
            res+=(char)(carry%10+'0');
            carry/=10;
            i--;
            j--;
        }
        if (carry==1){
            res+='1';
        }
        reverse(res.rbegin(), res.rend());
        return res;
    }
};