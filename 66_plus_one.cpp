class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add=1;
        std::vector<int> v; //new vector to store digits after plus one
        
        while(digits.size()>0)
        {
            int x=digits.back();    //get last element value
            digits.pop_back();  //remove last element, size is loop control variable
            x=x+add;
            v.insert(v.begin(), x%10);
            add = x/10;
        }
        if (carry>0)    //deal with all 9 situation
        {
            v.insert(v.begin(), carry);
        }
      return v;         
    }
};