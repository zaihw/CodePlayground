class Solution {
private:
    //get int value of each ch from left to right w/o considering substraction
    int getInt(char ch){
        int val=0;
    switch (ch){
        case 'I': val=1; break;
        case 'V': val=5; break;
        case 'X': val=10; break;
        case 'L': val=50; break;
        case 'C': val=100; break;
        case 'D': val=500; break;
        case 'M': val=1000; break;
    }
    return val;
}
public:
    int romanToInt(string s) {
        if(s.size()==0) return 0;
        int res = getInt(s.at(0));
        for (int i=1; i<s.size(); i++){
            int pre=getInt(s.at(i-1));
            int pos=getInt(s.at(i));
            //handle substraction
            if (pre<pos){
                res=res-2*pre+pos;
            }else{
                res+=pos;
            }
        }
        return res;
    }
    
};