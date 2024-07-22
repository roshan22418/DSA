#include<iostream>
using namespace std;


class TWOStack
{
    public:
        int *arr;
        int top1;
        int top2;
        int size;
        TWOStack(int size1){
            arr = new int[size1];
            this->top1 = -1;
            this->top2 = size1;
            this->size = size1;

        } 

        void push1(int data){
            if (top2-top1==1)
            {
                cout<<"overflow"<<endl;
            }
            else{
                top1++;
                arr[top1]= data;
            }

        }
        void push2(int data){
            if (top2-top1==1)
            {
                cout<<"overflow"<<endl;
            }
            else{
                top2--;
                arr[top2]= data;
            }

        } 
        void pop1(){
            if (top1==-1)
            {
                cout<<"underflow"<<endl;
            }
            arr[top1] = 0;
            top1--;

        }
        void pop2(){
            if (top2==size)
            {
                cout<<"underflow"<<endl;
            }
            arr[top2] = 0;
            top2++;

        }


        void print(){
            for (int i = 0; i < size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            cout<<"top1 " <<arr[top1]<<endl;
            cout<<"top2 "<<arr[top2]<<endl;


        }

};



int main(){
    TWOStack st(10);
    st.push1(47);
    st.push1(47);
    st.push2(45);
    st.push1(24);
    st.push2(45);
    st.push1(24);
    st.push2(45);
    st.push1(24);
    st.push2(45);
    st.push1(24);
    st.push2(45);
    st.push1(24);
    st.push2(45);
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();


    
    st.print();
    return 0;




}