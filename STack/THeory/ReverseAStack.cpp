#include<bits/stdc++.h>
using namespace std;

void reverseOrder(stack<int> &st,int data){
    if (st.empty())
    {
        st.push(data);
        return;
    }
    int temp = st.top();
    st.pop();
    reverseOrder(st,data);
    st.push(temp);    
    
}









int main(){
    stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    
    

}