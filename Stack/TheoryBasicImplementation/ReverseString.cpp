#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "Roshan";
    stack<char> st;
    for (int i = 0; i < name.size();i++)
    {
        st.push(name[i]);
    }
    
    while (!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
    
}