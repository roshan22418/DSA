#include<iostream>
#include<stack>
using namespace std;


// class Stack{
//     public:
//     int* arr;
//     int size;
//     int top;
//     Stack(int size){
//         arr = new int(size);
//         top = -1;
//     }
//     int getSize(){
//         return top+1;
//     }
//     void push(int val){
//         if(top ==size){
//             cout<<"overflow"<<endl;
//         }
//         else{
//             top++;
//             arr[top] = val;
//         }
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"underFlow"<<endl;
//         }
//         else{
//             top--;
//         }
//     }
//     bool isEmpty(){
//         if (top==-1)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
        
//     }
//     int getTop(){
//         if (top==-1)
//         {
//             cout<<"stack is empty"<<endl;
//         }
//         else{
//             return arr[top];
//         }
        
//     }
//     void printStack(){
//         for(int i = 0;i<getSize();i++){
//             cout<<arr[i]<<",";
//         }
//         cout<<endl;
//     }

// };
int main(){
    // Stack st(8);
    // cout<<st.isEmpty()<<endl;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // cout<<"size is "<<st.getSize()<<endl;
    // cout<<st.getTop()<<endl;
    // st.printStack();
    stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    cout<<st.top()<<endl;
    return 0;


}