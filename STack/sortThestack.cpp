#include<iostream>
#include<stack>
using namespace std;

void insertElementInsorted(stack<int>& s,int temp){
    if(s.empty() || temp>s.top()){

        s.push(temp);
        return;
    }
    int newtemp = s.top();
    s.pop();
    insertElementInsorted(s,temp);
    s.push(newtemp);
    
}

void solve(stack<int>& s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s);
    insertElementInsorted(s,temp);
}
// void sort1(stack) {
//     solve(s);
    
// }
int main(){
    stack<int> s;
    s.push(10);
    s.push(2);
    s.push(34);
    s.push(8);
    cout<<"hello "<<s.top()<<endl;
    solve(s);
    cout<<"enter in hello"<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<",";
        s.pop();

    }
    return 0;
    
    
}