/* there are two approac
1) by using stack first insert all element in stack and again push back in queue
2) by using recurssion same procees
*/



#include<iostream>
using namespace std;


#include<queue>


void reverseQueue(queue<int> &q){
    if(q.empty()){
        return;
    }
    int topElem = q.front();
    q.pop();
    reverseQueue(q);
    q.push(topElem);
}

int main(){
    queue<int> q;
    q.push(12);
    q.push(3);
    q.push(45);
    q.push(23);
    q.push(46);
    reverseQueue(q);
    while (!q.empty())  
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
    


}