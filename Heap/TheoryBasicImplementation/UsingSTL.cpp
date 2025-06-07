#include<iostream>
using namespace std;

#include<queue>


int main(){
    //min heap
    priority_queue<int,vector<int>,greater<int>> minPq;

    //max heap
    // priority_queue<int> maxpq;

    minPq.push(20);
    minPq.push(30);
    minPq.push(5);
    minPq.push(29);
    minPq.push(7);
    cout<<"top element is min element "<<minPq.top()<<endl;
    minPq.pop();
    cout<<"after pop min element now is "<<minPq.top()<<endl;
    cout<<minPq.empty()<<endl;
    return 0;
}