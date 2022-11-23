class MyStack {
public:
    queue<int> q;
    MyStack() {
      
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int ans1 = q.front();
        q.pop();
        return ans1;
    }
    
    int top() {
        int ans = q.front();
        return ans;
    }
    
    bool empty() {
        bool x  = q.empty();
            return x;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */