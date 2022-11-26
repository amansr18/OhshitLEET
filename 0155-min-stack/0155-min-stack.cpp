class MinStack {
public:
    int min = INT_MAX;
    stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(val<min){
            min=val;
        }
        s.push(min);
        s.push(val);
    }
    
    void pop() {
       s.pop();
        s.pop();
        if(s.empty()){
            min=INT_MAX;
        }
        else{
            int x=s.top();
            s.pop();
            min = s.top();
            s.push(x);
        }
    }
    
    int top() {
        int x = s.top();
        return x;
    }
    
    int getMin() {
        int x = s.top();
        s.pop();
        int ans = s.top();
        s.push(x);
        return ans;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */