class Solution {
public:
    int reverse(int x) {
        std::vector<int> holder;
        std::vector<int>::iterator it;
        int a, b, d;
        
        //determine sign of x
        if (x>-1){
            d = 1;
        }
        else{
            d = -1;
        }
        
        //breakdown and reverse digits of input integer
        do{
            //does use abs(x), since abs(INT_MIN)>INT_MAX
            a=abs(x%10);
            b=abs(x/10);
            x=b;
            holder.push_back(a);
        }while(b>0);
        
        //construct reversed integer
        int sum = 0;
        for (int i=0; i<holder.size(); i++){
            //output overflow check
            if (sum>INT_MAX/10 || sum<INT_MIN/10){
                return 0;
                break;
            }
            sum=sum*10+holder[i];
        }
        sum=sum*d;
        
        return sum;
        }               
};