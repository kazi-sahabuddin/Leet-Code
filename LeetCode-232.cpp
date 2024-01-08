class MyQueue {
private:
    stack<int> pushStack;
    stack<int> popStack;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        this->pushStack.push(x);
        
    }
    
    int pop() {
        if(this->popStack.empty()){
            while(!this->pushStack.empty()){
                this->popStack.push(this->pushStack.top());
                this->pushStack.pop();
            }
        }
        int item = this->popStack.top();
        this->popStack.pop();
        return item;
    }
    
    int peek() {

        if(this->popStack.empty()){
            while(!this->pushStack.empty()){
                this->popStack.push(this->pushStack.top());
                this->pushStack.pop();
            }
        }
        return this->popStack.top();
        
    }
    
    bool empty() {
        return this->pushStack.empty() && this->popStack.empty();        
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
