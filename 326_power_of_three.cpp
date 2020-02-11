class Solution {
private:
    //generate a map of all power of 3s within range (1,INT_MAX) as key
    void init(unordered_map<int, bool>& power){
        int p=1;
        power[1]=true;
        while(1){
            p*=3;
            power[p]=true;
            if (p>INT_MAX/3)
                break;
        }
    }
public:
    bool isPowerOfThree(int n) {
        static unordered_map<int, bool> power;
        if(power.size()==0) init(power);
        //check if value 'n' presents in map 'power' by compare iterator with power.end()
        return power.find(n) != power.end();
    }
};