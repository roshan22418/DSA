#include<iostream>
#include<limits.h>
#include <vector>
using namespace std;



// int main(){
//     int n;
//     // cin>>n;
//     // for (int i = 1; i < 11; i++)
//     // {
//     //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//     // }
    
//     return 0;
    
// }

// int fibonacciSeries(int n){
//     if (n<=0)
//     {
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    
// }


// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }

// void minElement(int *arr, int n,int index,int &min){
//     if(n==index){
//         return; 
//     }
//     if (arr[index]<min)
//     {
//         min= arr[index];
//     }
//     index++;
    
//     minElement(arr,n,index,min);
    


// }
// //check element present or not
// int checkElement(int *arr,int n,int element,int index){

//     if (index==n)
//     {
//         return 0; 
//     }
    
//     if (arr[index]==element)
//     {       
//         return 1;
//     }
//     return checkElement(arr,n,element,index+1);

    

// }


// //Print all array element 

// void printArray(int *arr,int n,int index){
//     cout<<"enter in printarry"<<endl;
//     if (n==index)
//     {
//         return ;
//     }
//     cout<<arr[index]<<endl;
//     printArray(arr,n,index+1);
// }

// void insertElement(int *arr,int n,int index, vector<int> &ans){
//     cout<<"enter in first stage"<<endl;

//     if(n==index){
//         cout<<"enter in final return"<<endl;
//         return;
//     }
//     if (arr[index]%2==0)
//     {
       
//         ans.push_back(arr[index]);
//         cout<<"enter in if condition"<<endl;
//     }
//     index++;
//     insertElement(arr,n,index,ans);
    

            
// }
// void everyElementDouble(int *arr,int n,int index){
//     cout<<"enter in everyElementDouble"<<endl;
//     if(index ==n){
//         return ;
//     } 
//     arr[index] = 2*arr[index];
//     everyElementDouble(arr,n,index+1);

// }


// void occurenceElement(int *arr,int n, int index,int target){
//     if(index == n){
//         return;
//     }
//     if (arr[index]==target)
//     {
//         cout<<arr[index]<<endl;
//     }
//     occurenceElement(arr,n,index+1,target);
// }
// // vector<int> occurenceElement1(int *arr,int n,int index,int target){
// //     vector<int> ans;
// //     if (index==n)
// //     {
// //         return ans;
// //     }
// //     if (arr[index]==target)
// //     {
// //         ans.push_back(arr[index]);
// //     }
// //     occurenceElement1(arr,n,index+1,target);
    
    
// // }


// void insertDigit(int n,vector<int> &ans){
//     cout<<"enter in insertDIgit"<<endl;
//     if(n==0){
//         return;

//     }
//     int ans1 = n%10;
//     n = n/10;
//     insertDigit(n,ans);
    
//     ans.push_back(ans1);
    
    
// }


// int checkArraySorted(int *arr,int n,int index){
//     if (n==index)
//     {
//         return 1;   
//     }
//     if (n>index+1)
//     {
//         if (arr[index]>arr[index+1]){
//             return 0;
//             }
        
//     }
//     checkArraySorted(arr,n,index+1);
    
   

    
    
// }
    


// int main(){
//     // cout<<fibonacciSeries(4)<<endl;
//     // cout<<sum(10)<<endl;
//     int min = INT_MAX;
//     int array[] = {9,2,3,4,-5,6,7,3,3,3,3,3,3,3,7,7};
//     int n = sizeof(array)/sizeof(array[0]);
//     // printArray(array,7,0);
//     // cout<<checkElement(array,7,9,0)<<endl;
//     // minElement(array,n,0,min);
//     // cout<<min<<endl;
//     // vector<int> finalAns ;
//     // insertElement(array,n,0,finalAns);
//     // int length = finalAns.size();
//     // for (int i = 0; i < length; i++)
//     // {
//     //     cout<<finalAns[i];
//     // }
//     // everyElementDouble(array,n,0);
//     // printArray(array,n,0);
//     // vector<int> ans;
//     // insertDigit(3456,ans);
//     // for (int i = 0; i < ans.size(); i++)
//     // {
//     //     cout<<ans[i]<<" ";
//     // }
//     int array1[] = {0};
//     cout<<checkArraySorted(array1,0,0)<<endl;
    
//     return 0;
// }