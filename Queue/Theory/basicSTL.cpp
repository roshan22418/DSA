#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    if (q.empty())
    {
        cout<<"q is empty "<<endl;

    }
    else{
        cout<<"q is not empty"<<endl;
    }
    cout<<"size of q is "<<q.size()<<endl;
    cout<<"front elemenet of queue is "<<q.front()<<endl;
    cout<<"rear element of queue is "<<q.back()<<endl;
    q.pop();
    q.pop();
    q.pop();
    // q.pop();
    cout<<"size of q is "<<q.size()<<endl;
    cout<<"front elemenet of queue is "<<q.front()<<endl;
    cout<<"rear element of queue is "<<q.back()<<endl;

    return 0;
}

