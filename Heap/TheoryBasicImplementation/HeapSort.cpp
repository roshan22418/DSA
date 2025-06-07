/*so if we do HeapSort then we need to first create a heap (max)
after creating the max heap then you do swap the first and last element and then decrease the size and
call the heapify of the frist index and 
time complexity is "O(nlog(n))"
space complxity is "O(n)"*/


#include<iostream>
using namespace std;





void Heapify(int arr[],int n,int index){
    int leftIndex = 2*index;
    int rightIndex = 2*index +1;
    int largestIndex= index;
    if(leftIndex<=n && arr[largestIndex]<arr[leftIndex]){
        largestIndex = leftIndex;
    }
    if(rightIndex<=n && arr[largestIndex]<arr[rightIndex]){
        largestIndex = rightIndex;
    }
    if(index != largestIndex){
        swap(arr[index],arr[largestIndex]);
        index = largestIndex;
        Heapify(arr,n,index);
    }
    else{
        return;
    }
}


void buildHeap(int arr[],int n){
    for(int i = (n/2);i>0;i--){
        Heapify(arr,n,i);
    }
    
}


void heapSort(int arr[],int n){
    while (n>1)
    {
        swap(arr[1],arr[n]);
        n--;
        Heapify(arr,n,1);
    }
    
    
}

int main(){
    int arr[] = {-1,5,10,15,20,25,12};
    int size = 6;
    buildHeap(arr,size);
    for(int i = 1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,size);
    cout<<"heapSort"<<endl;
    for(int i = 1;i<=size;i++){
        cout<<arr[i]<<" ";
    }

}