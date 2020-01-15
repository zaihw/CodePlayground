class Solution {
private:
    int squares (int n){
        int res=0;
        int sq=0;
        for (; n>0; n/=10){
            sq=n%10;
            res+=(sq*sq);
        }
        return res;
    }
    
public:
    bool isHappy(int n) {
         if (n==1)  return true;
        map<int, bool> m;
        m[n]=true;
        
        //keep calculate sum of squares of digits
        //might be infinity loop
        while(n!=1){
            n=squares(n);
            //check if 'n' apprears in prior calculations
            //if 'n' is new, keep add new <n, true> pairs in table
            if (m.find(n)!=m.end()){
                return false;
            }
            m[n]=true;
        }
        return true;
        
    }
};