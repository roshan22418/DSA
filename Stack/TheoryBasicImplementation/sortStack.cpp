#include<bits/stdc++.h>
using namespace std;


// time complexity is n^2 due to 1 + 2 + 3+ 4+ 5------n;

void solve(stack<int> &st,int data){
    //first will be check for stack is empty or not because give underflow due to unavailiabilty of element;
    // if(st.empty()){
    //     st.push(data);
    //     return;
    // }
    // if(data>st.top() ){
    //     st.push(data);
    //     return;

    // }
    if(st.empty() ||data>st.top() ){
        st.push(data);
        return;

    }
    int topElem = st.top();
    st.pop();
    solve(st,data);
    st.push(topElem);

}

void sortStack1(stack<int> &st){
    if (st.empty())
    {
        return;
    }
    int elem = st.top();
    st.pop();
    sortStack1(st);
    solve(st,elem);
    
}


int main(){
    stack<int> st;
    st.push(20);
    st.push(30);
    st.push(1);
    st.push(400);
    st.push(343);
    sortStack1(st);
    while (!st.empty())
    {
        cout<<st.top()<<" "<<endl;
        st.pop();
    }
    return 0;

    
}