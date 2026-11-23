class MinStack {
private:
    stack<int> stk;
    stack<int> minStk;
public:
    MinStack() {}
    
    void push(int val) {
        stk.push(val);
        if(minStk.empty()){
            val = min(val, val);
        } else {
            val = min(val, minStk.top());
        }
        minStk.push(val);
    }
    
    void pop() {
        stk.pop();
        minStk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};
