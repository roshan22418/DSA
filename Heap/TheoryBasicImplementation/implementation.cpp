

#include <iostream>
using namespace std;

#include <vector>

class heap
{
public:
    int *arr;
    int size;
    int capacity;
    heap(int capacity)
    {
        this->arr = new int[capacity];
        // here size show how many element present in the heap
        this->size = 0;
        this->capacity = capacity;
    }

    void insertion(int val)
    {
        if (size == capacity)
        {
            cout << "Heap is overFlow" << endl;
            return;
        }
        size++;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
            {
                return;
            }
        }
    }
    int  deletion(){
        if(size == 0){
            cout<<"heap is empty"<<endl;
            return -1;
        }
        int rootIndex =1;
        int ans = arr[rootIndex];
        arr[1] = arr[size];
        // swap(arr[rootIndex],arr[size]);
        size--;
        while (rootIndex<size)
        {
            int leftIndex = 2*rootIndex;
            int rightIndex = 2*rootIndex +1;
            int largestIndex = rootIndex;
            if(leftIndex <=size && arr[leftIndex]> arr[largestIndex]){
                largestIndex = leftIndex;
            }
            if (rightIndex <= size && arr[largestIndex]<arr[rightIndex])
            {
                largestIndex = rightIndex;
            }
            if (rootIndex == largestIndex)   //its means root not itself is the largest element
            {
                break;
            }
            else{
                swap(arr[rootIndex],arr[largestIndex]);
                rootIndex = largestIndex;
            }
            
            
        }
        return ans;
        
    }
    
    void printHeap(){
        cout<<"printing the Heap"<<endl;
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};




void deletion(int *arr,int n,int index){
    int leftIndex = 2* index;
    int rightIndex = 2*index +1;
    int largestIndex = index;
    if(leftIndex<=n && arr[largestIndex]<arr[leftIndex]){
        largestIndex = leftIndex;
    }
    if(rightIndex<=n && arr[largestIndex]<arr[rightIndex]){
        largestIndex = rightIndex;
    }
    if(index != largestIndex){
        swap(arr[index],arr[largestIndex]);
        index = largestIndex;
        deletion(arr,n,index);
    }
    else{
        return;
    }

}

int main()
{
    heap h1(20);
    h1.insertion(10);
    h1.insertion(20);
    h1.insertion(5);
    h1.insertion(11);
    h1.insertion(6);

    
    
    cout << "print the element" << endl;
    h1.printHeap();
    int deleted = h1.deletion();
    cout << "print the element" << endl;
    h1.printHeap();
}