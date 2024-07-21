#include<bits/stdc++.h>
using namespace std;

void solveReversOrder(stack<int> &st,int data){
    if (st.empty())
    {
        st.push(data);
        return;
    }
    int temp = st.top();
    st.pop();
    solveReversOrder(st,data);
    st.push(temp);    
    
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int elem = st.top();
    st.pop();
    reverseStack(st);
    solveReversOrder(st,elem);
}









int main(){
    stack<int> st;
    st.push(20);
    st.push(30);
    // st.push(40);
    // st.push(50);
    // while (!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    reverseStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
    



    
    

}