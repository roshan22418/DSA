#include<iostream>
using namespace std;

void quicksort(int *arr, int start,int end){
    if(start>=end){
        return;
    }
    int pivot = end;
    int i = start-1;
    int j = start;
    while (j<pivot)
    {
        if (arr[pivot]>arr[j])
        {
           i++;
           swap(arr[i],arr[j]);
        }
        j++;
        
    }
    i++;
    swap(arr[i],arr[pivot]);
    quicksort(arr,start,i-1);
    quicksort(arr,i+1,end);
     
}

int main(){
    int arr[] = {4,2,3,6,1,4,7,34,3,-2,-2332,-4343};
    int size = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    

}