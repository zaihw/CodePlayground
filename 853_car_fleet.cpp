class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, int>ps;
        for (int i=0; i<position.size(); i++){
            ps[position[i]]=speed[i];
        }
        int res=0;
        double time=0;
        map<int, int>::reverse_iterator rit=ps.rbegin();
        for (; rit!=ps.rend(); rit++) {
            if ((target - rit->first)*1.0/rit->second > time){
                res+=1;
                time=(target - rit->first)*1.0/rit->second;
            }
        }
        return res;
    }
};