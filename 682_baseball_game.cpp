class Solution {
public:
    int calPoints(vector<string>& ops) {
        int res;
        int len = ops.size();
        vector<int> aux;
        
        // convert vector<string> ops to stack<int> aux
        for (int i=0; i<len; i++){
            if (ops[i] == "+")
                aux.push_back(aux.end()[-1] + aux.end()[-2]);
            else if (ops[i] == "C")
                aux.pop_back();
            else if (ops[i] == "D")
                aux.push_back(aux.back() * 2);
            else
                aux.push_back(stoi(ops[i]));
            }
        res = accumulate(aux.begin(), aux.end(), 0);
        return res;
        } 
};