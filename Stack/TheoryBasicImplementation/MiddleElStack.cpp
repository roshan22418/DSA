#include<bits/stdc++.h>
using namespace std;

int solve(stack<int> &st, int &pos){
    //base case
    if (pos==1)
    {
        return st.top();
    }
    //ek case hum solve karenge
    pos--;
    int topEl = st.top();
    st.pop();
    //recursion
    return solve(st,pos);
    //backtracking
    st.push(topEl);
    

}

int getMiddleElement(stack<int> &st){
    int pos = 0;
    int Size = st.size();
    if (st.empty())
    {
        return -1;
    }
    else
    {
        if (st.size()&1==1)
        {
            pos = (Size/2) +1;          
        }
        else
        {
            pos = Size/2;
        }        
        
    }
    return solve(st,pos);
    
    
}


int main(){
    stack<int> st;
    st.push(10);
    // st.push(20);
    // st.push(40);
    // st.push(150);
    // st.push(60);
    // st.push(50);
    // st.push(60);

    int midElement = getMiddleElement(st);
    cout<<"middle Element "<< midElement<<endl;
    return 0;
}