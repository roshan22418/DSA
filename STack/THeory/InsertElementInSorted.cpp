#include<bits/stdc++.h>
using namespace std;

void insertElementAtsoertedStack(stack<int> &st,int data){
    if(st.empty()){
        st.push(data);
        return;
    }
    if (data>st.top())
    {
        st.push(data);
        return;
    }
    int temp = st.top();
    st.pop();
    insertElementAtsoertedStack(st,data);
    st.push(temp);

    
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    insertElementAtsoertedStack(st,25);
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    

}