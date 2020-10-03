class MinStack {
private:
    std::stack<int> my_stack;
    std::stack<int> min_stack;
public:
    /** initialize your data structure here. */
    MinStack() {}
    
    // push to min_stack only when min_stack is empty or min_stack.top()>x
    void push(int x) {
        my_stack.push(x) ;
        if(min_stack.empty() or min_stack.top() > x)
            min_stack.push(x) ;
    }
    
    // pop from min_stack only when min_stack.top()==my_stack.top()
    void pop() {
        if (my_stack.top() == min_stack.top()){
            min_stack.pop();
            my_stack.pop();
        } else {
            my_stack.pop();
        }
    }
    
    int top() {
        return my_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */