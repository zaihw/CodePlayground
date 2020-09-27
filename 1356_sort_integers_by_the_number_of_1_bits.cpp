// decimal to binary and return number of 1's in binary
int dec_2_Binary(int a){
        int sum=0;
        while (a>0){
            sum+=a%2;
            a/=2;
        }
        return sum;
    }
// sort rule
bool cmp(int& v1, int& v2){
    // if number of 1's are not the same, ascending by sum
    if (dec_2_Binary(v1) != dec_2_Binary(v2)){
        return dec_2_Binary(v1)<dec_2_Binary(v2);
        }else{
        // if number of 1's are the same,ascending by v value
        return v1 < v2;
        }        
    }
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        std::sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};