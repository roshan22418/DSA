#include<iostream>
using namespace std;

class TwoStack
{
private:
    
public:
    int* arr;
    int size;
    int top1;
    int top2;
    TwoStack(int size);
    ~TwoStack();
    void push1(int data);
    void push2(int data);
    void pop1();
    void pop2();
};

TwoStack::TwoStack(int size)
{
    this->size = size;
    arr = new int[size];
    top1 = -1;
    top2 = size;
}

TwoStack::~TwoStack()
{
    delete[] arr;
}



void TwoStack::push1(int data){
    if (top1+1 ==top2)
    {
        cout<<"stack overflow"<<endl;
    }
    top1++;
    arr[top1] = data;   

}


void TwoStack::push2(int data){
    if (top2-1 ==top1)
    {
        cout<<"stack overflow"<<endl;
    }
    top2--;
    arr[top2] = data;   

}

void TwoStack::pop1(){
    if (top1==-1)
    {
        cout<<"sack1 underflow"<<endl;
    }
    top1--;    
}
void TwoStack::pop2(){
    if(top2==size){
        cout<<"stack2 undderflow"<<endl;
        
    }
}



