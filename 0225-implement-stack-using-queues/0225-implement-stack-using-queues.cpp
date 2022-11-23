class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
      
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            int val = q1.front();
            q1.pop();
            q2.push(val);
        }
        swap(q1,q2);
    }
    
    int pop() {
        int ans1 = q1.front();
        q1.pop();
        return ans1;
    }
    
    int top() {
        int ans = q1.front();
        return ans;
    }
    
    bool empty() {
        bool x  = q1.empty();
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



/** second approach using Single QUEUE */
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
