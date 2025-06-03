#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    Queue(int size)
    {
        this->size = size;
        this->front = -1;
        this->rear = -1;
        arr = new int[size];
    }

    void push(int data)
    {
        if (rear == size - 1)
        {
            cout << "overFlow in this case" << endl;
        }

        else if (rear == -1 && front == -1)
        {
            rear++;
            front++;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pop()
    {
        if (rear == -1 && front == -1)
        {
            cout << "underFlow" << endl;
        }
        else if (rear == front)           //bhul jate hai esee yaad rakhe;
        {
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    int getsize()
    {
        if (rear==-1&&front==-1)
        {
            return 0;      //bhul jate hai esee yaad rakhe;
        }
        else{
            return rear - front + 1;

        }
        
        
    }
    bool isEmpty()
    {
        if (rear == -1 && front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getFRontElement(){
        if(front==-1){
            cout<<"there is no element in queue"<<endl<<endl;
            return -1;
        }
        else
        {
            cout<<"ther i"<<endl;
            return arr[front];
        }
        
    }
    int getRearElement(){
        if (rear==-1)
        {
            cout<<"there is no element"<<endl;
            return -1;

        }
        else{
            return arr[rear];
        }
        
    }
    void print(){
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"front element "<<front<<endl;
        cout<<"Rear Element "<<rear<<endl;
        
    }
};

main()
{
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.getsize()<<endl;
   
    cout<<q.getFRontElement()<<endl;
    cout<<q.getRearElement()<<endl;




    q.print();

    
    return 0;
}