#include<bits/stdc++.h>
using namespace std;

void InsetAtBottom(stack<int> &st,int bottomEle){
    if (st.empty())
    {
        st.push(bottomEle);
        return;
    }
    int topEle = st.top();
    st.pop();
    InsetAtBottom(st,bottomEle);
    st.push(topEle);
    

}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(34);
    int bottomElemenet = 400;
    cout<<"size of stack "<<st.size()<<endl;
    InsetAtBottom(st,bottomElemenet);
    cout<<" after insert size of stack "<<st.size()<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}