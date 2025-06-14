/*
in this problem first store k element in stack that help to me reversek element 
and again this element pop in queue and remaing n-k lement first pop and push one by one lement 
*/

#include<iostream>
using namespace std;
#include<queue>
#include<stack>




class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        int sizeq = q.size();
        int remaingElement = sizeq-k;
        if(k>sizeq){
            return q;
        }
        stack<int> reverseTillK;
        while(k>0){
            reverseTillK.push(q.front());
            k--;
            q.pop();
        }
        while(!reverseTillK.empty()){
            q.push(reverseTillK.top());
            reverseTillK.pop();
        }
        
        while(remaingElement>0){
            int element = q.front();
            q.pop();
            q.push(element);
            remaingElement--;
        }
        return q;
        
        
    }
};