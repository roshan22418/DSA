

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
    
    void printHeap(){
        cout<<"printing the Heap"<<endl;
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};

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
}