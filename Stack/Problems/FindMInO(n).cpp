/*
in this problem find min in O(1) at any stage of the stack so we need to track the min of every element 
so using single data element we use pair to track the min element so use vector<pair<int,int>> p
and if we use back value or find back value so use
p.back()*/



#include<iostream>
using namespace std;
#include<vector>

class MinStack {
public:
    vector<pair<int,int>> st;
    MinStack() {

        
    }
    
    void push(int val) {
        if(st.empty()){
            pair<int,int> p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }
        else{
            pair<int,int> p = st.back();
            int oldMin = p.second;
            p.first = val;
            p.second = min(oldMin,val);
            st.push_back(p);
        }
        
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        pair<int,int> p = st.back();
        return p.first;
        
    }
    
    int getMin() {
        pair<int,int> p = st.back();
        return p.second;
        
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