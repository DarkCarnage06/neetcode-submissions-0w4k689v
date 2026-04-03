class MinStack {
    vector<int>v;
    vector<int>minstack;
public:
    MinStack() {
    }
    
    void push(int val) {
        v.push_back(val);
          if (minstack.empty() || val <= minstack.back()) {
            minstack.push_back(val);
        }
    }
    
    void pop() {
       
           if (v.back() == minstack.back()) {
            minstack.pop_back();
        }
         v.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return minstack.back();
    }
};
