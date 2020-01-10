class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int rev=reverse(x);
        return x==rev;
    }
public:
    int reverse(int x){
        int rev=0;
        //loop to build reversed integer
        //end condition keep divide by 10 until x <10
        while(x!=0){
            int pop = x%10;
            x/=10;
            //check overflow before doing calculation
            if (rev>INT_MAX/10)    return 0;
            if (rev<INT_MIN/10)    return 0;
            rev=rev*10+pop;
        }
        return rev;
    }
};