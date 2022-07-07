class MyStack {
public:
    queue<int> fq,sq;
    MyStack() {
        
    }    
    void push(int x) {
        sq.queue::push(x);
        while(fq.size()!=0)
        {
            sq.queue::push(fq.front());
            fq.queue::pop();
        }
        swap(fq,sq);
    }
    
    int pop() {        
        int x = fq.queue::front();
        fq.queue::pop();
        return x;
    }
    
    int top() {
        return fq.front();
    }
    
    bool empty() {
        bool ans = false;
        if(fq.size()==0)
            ans=true;    
        return ans;
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