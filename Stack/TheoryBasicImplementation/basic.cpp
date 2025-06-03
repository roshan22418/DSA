#include<iostream>
using namespace std;
class stack{
    public:
        int *arr;
        int top;
        int size;
        stack(int s){
            this->size = s;
            arr = new int[size];
            this->top = -1;
        }
        void push(int data){
            if(top==size-1){
                cout<<"overflow size is full"<<endl;
            }
            else{
                top++;
                arr[top] = data;

            }
            
        }
        void pop(){
            if(top==-1){
                cout<<"undreflow happen due to stack is empty"<<endl;
            }
            else{
                top--;

            }
            
        }
        int getSize(){
            return top+1;
        }
        bool isEmpty(){
            if(top==-1){
                return 0;
            }
            else{
                return 1;
            }
        }
        int getTop(){
            if(top==-1){
                cout<<"stack is empty"<<endl;                
            }
            else{
                return arr[top];
            }
        }
        void print(){
            for (int i = 0; i < getSize(); i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            cout<<"top index"<<top<<endl;
            cout<<getTop()<<endl;
            
        }

};

int main(){
    stack st(10); // cretion of stack like static 
    st.push(10);
    st.push(30);
    st.print();
    
    st.push(40);
    st.push(50);
    st.print();
    st.push(10);
    st.push(30);
    st.print();
    
    st.push(40);
    st.push(50);
    st.print();
    st.push(10);
    st.push(30);
    st.print();
    
    st.push(40);
    st.push(50);
    st.print();
    cout<<st.isEmpty()<<endl;





}