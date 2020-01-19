class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2 != 0) return false;
        stack<char> st;
        for (auto ch:s){
            if (ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }else if (ch==')' || ch==']' || ch=='}'){
                //if ch is right side, st.top() have to be the matching left side
                if (st.empty()) return false;
                char sch=st.top();
                if ((sch=='(' && ch==')') || (sch=='[' && ch==']') || (sch=='{' && ch=='}')){
                    //if ch is matching st.top(), instead of push ch in stack, pop out st.top()
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }            
        }
        return st.empty();
    }
};