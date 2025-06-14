/* 
in this problem we need to find first negative integer for every window
inpur array = 2, -5, 4, -1, -2, 0 ,5
w1 = 2, -5, 4    -> -5
w2 = -5, 4, -1   -> -5
w3 = 4, -1,-2    -> -1
w4 = -1, -2, 0   -> -1
w5 = -2, 0, 5    -> -2


// total number window is (n-k+1)

so we use queue to track the -ver number and first traveral to first k element in window 1 and push all -ve number
*/


#include<iostream>

using namespace std;
#include<queue>
#include<vector>




vector<int>  helperTofindNegative(vector<int> arr,int k){
    vector<int> finalAns;
    queue<int> q;
    for(int i = 0;i<k;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    if (!q.empty())
    {
        finalAns.push_back(arr[q.front()]);
    }
    else{
        finalAns.push_back(0);
    }
    for (int i = k; i < arr.size(); i++)
    {
        int index = q.front();
        if(i-index == k){         // if(i -index >=k)
            q.pop();
        }           
        if(arr[i]<0){
            q.push(i);
        }  
        if(!q.empty()){
            finalAns.push_back(arr[q.front()]);
        }
        else{
            finalAns.push_back(0);
        }
    }
    return finalAns;
    
    
}




int main(){
    vector<int> arr = {2,-5,4,-1,-2,0,5};
    vector<int> negNumberEveryWindow = helperTofindNegative(arr,3);
    for (int i = 0; i < arr.size()-2; i++)     
    {
        cout<<negNumberEveryWindow[i]<<endl;
    }
    return 0;
    
}