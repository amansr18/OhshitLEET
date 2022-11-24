class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st1.empty()){
            int val = st1.top();
            st1.pop();
            st2.push(val);
        }
        st1.push(x);
        while(!st2.empty()){
            int val1 = st2.top();
            st2.pop();
            st1.push(val1);
        }
    }
    
    int pop() {
        int ans = st1.top();
        st1.pop();
        return ans;
    }
    
    int peek() {
        int ans = st1.top();
        return ans;
    }
    
    bool empty() {
        bool x = st1.empty();
        return x;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */