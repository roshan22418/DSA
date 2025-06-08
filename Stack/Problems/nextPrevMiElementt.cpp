/*
we use stack and track the previous minimum element of the array from the back side */




#include<iostream>
using namespace std;


#include<stack>
#include<vector>

vector<int> nextSmallest(vector<int> arr){
    int size = arr.size();
    vector<int> ans(size);
    stack<int> st;
    st.push(-1);
    for(int i = size-1;i>=0;i--){
        while (!st.empty() && st.top() >= arr[i])
        {
            cout<<"enter in while loop"<<endl;
            st.pop();
        }
        cout<<"exit in while loop"<<endl;

        ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
    
}


vector<int> previousSmallestElem(vector<int> arr){
    int size = arr.size();
    vector<int> ans(size);
    stack<int> st;
    st.push(-1);
    for(int i = 0;i<size;i++){
        int curr = arr[i];
        while(curr<=st.top()){
            st.pop();

        }
        ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

int main(){
    vector<int> input = {8,4,6,2,3,6,1};
    cout<<"ans"<<endl;
    vector<int> ans = nextSmallest(input);
    vector<int> prev = previousSmallestElem(input);
    
    for(int i = 0;i<ans.size();i++){
        cout<<prev[i]<<" ";
    }
    return 0;
}