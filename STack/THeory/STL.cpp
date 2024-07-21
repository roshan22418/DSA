#include <iostream>
// #include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;

    st.pop();
    while (!st.empty())
    {
        st.pop();
    }
    
    if(st.empty()){
        printf("size is  empty");
    }
    else{
        printf("size of not empty");
    }
    cout<<endl;
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    
}