class Solution {
    
private:
    //convert vector to str
    string vecToStr(std::vector<int> v){
        stringstream ss;    
        //put vector elements in stream buffer
        for (int i=0; i<v.size(); i++){
            ss<<v[i];
        }
        return ss.str();
    }
    
private:
    //given a row, calculate next row
    std::vector<int> getNext(std::vector<int> &v){
        int cnt=1, val=v[0];
        std::vector<int> ret;
        //get value of occurance
        for(int i=1; i<v.size(); i++){
            if (v[i]==val){
                cnt++;
            }else{
                ret.push_back(cnt);
                ret.push_back(val);
                val=v[i];
                cnt=1;
            }
        }
        //take care of last set of elements of same value in v
        if (cnt>0 && val>0){
            ret.push_back(cnt);
            ret.push_back(val);
        }
        
        return ret;
    }
    
public:
    string countAndSay(int n) {
        if (n<=0)   return "";
        if (n==1)   return "1";
        
        string s;
        std::vector<int> v;
        v.push_back(1);
        for (int i=2; i<=n; i++){
            v = getNext(v);
        }
        s=vecToStr(v);
        return s;
    }
};