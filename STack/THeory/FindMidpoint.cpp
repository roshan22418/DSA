#include<iostream>
#include<stack>

using namespace std;
class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>& s,int pos){
        if(pos==1){
            return s.pop();
        }
        pos--;
        int topvalue = s.top();
        s.pop();
        solve(s,pos);
        s.push(topvalue);
    }
    void deleteMid(stack<int>& s) {
        int size = s.size();
        int position = (size+1)/2;
        if(size&1){
            position = position;
        }
        else{
            position +=1;
        }
        solve(s,position);
    }
};


int main(){
    return 0;
}