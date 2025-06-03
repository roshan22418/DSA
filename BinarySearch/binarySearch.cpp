#include<iostream>
using namespace std;

int binary_search(int *arr,int length,int target){
    int start = 0;
    int end = length-1;
    int mid = start + (end-start)/2;
    while(start<=length){
        if (arr[mid]==target)
        {
            return mid;
        }
        if (arr[mid]>target)
        {
            end = mid-1;
        }
        if (arr[mid]<target)
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;
        
        
        

    }
    return 0;
    
}

int binary_search1(int *arr, int target, int start,int end){
    if (start>end)
    {
        return -1;
    }
    int mid = start +(end-start)/2;
    if (arr[mid]==target)
    {
        return mid;
    }
    
    if (arr[mid]>target)
    {
        return binary_search1(arr,target,start,mid-1);
    }
    return binary_search1(arr,target,mid+1,end);
    
    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,8};
    int target = 5;
    int low = 0;
    int start = 0;
    int length = sizeof(arr)/sizeof(arr[0]);
    int end = length-1;
    cout<<binary_search1(arr,target,start,end);
}