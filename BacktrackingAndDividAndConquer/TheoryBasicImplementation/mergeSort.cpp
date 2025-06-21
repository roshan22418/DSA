#include<iostream>
using namespace std;


// void merge(int *arr,int start, int end){
//     int mid = (start + end)/2;
//     int left = mid -start +1;
//     int right = end -mid;
//     int *leftArr = new int[left];
//     int *rightArr = new int[right];

//     int k = start;
//     for (int i = 0; i < left; i++)
//     {
//         leftArr[i] = arr[k];
//         k++;
//     }
//     for (int i = 0; i < right; i++)
//     {
//         rightArr[i] = arr[k];
//         k++;
//     }

//     int leftIndex = 0;
//     int rightIndex = 0;
//     int MainIndex = start;
//     while (leftIndex<left&&rightIndex<right)
//     {
//         if (leftArr[leftIndex]<rightArr[rightIndex])
//         {
//             arr[MainIndex] = leftArr[leftIndex];
//             MainIndex++;
//             leftIndex++;
//         }
//         else
//         {
//             arr[MainIndex] = rightArr[rightIndex];
//             MainIndex++;
//             rightIndex++;
            
//         }

        
        
        
//     }
//     while (leftIndex<left)
//     {
//         arr[MainIndex] = leftArr[leftIndex];
//         MainIndex++;
//         leftIndex++;
        
//     }
//     while (rightIndex<right)
//     {
//         arr[MainIndex] = rightArr[rightIndex];
//         MainIndex++;
//         rightIndex++;
        
//     }     
        
//     delete[] leftArr;
//     delete[] rightArr;
    
    

// }

// void mergeSort(int *arr,int start , int end){
//     if (start>end)
//     {
//         return ;    
//     }
//     if (start ==end)
//     {
//         return;
//     }
//     int mid = start + (end -start)/2;
//     mergeSort(arr,start,mid);
//     mergeSort(arr,mid+1,end);

//     merge(arr,start,end);
    
    
// }


// int main(){
//     int arr[] = {12,34,1,6,-3,-56,1,2,3,4,66,4,444,444,33,22,55,66,88};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int start = 0;
//     int end = size-1;
//     mergeSort(arr,start,end);
//     cout<<"after sorting array look like this \n";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    

//     return 0;
// }




















// void mergeSort(int *arr,int start , int end){
//     if (start>end)
//     {
//         return ;    
//     }
//     if (start ==end)
//     {
//         return;
//     }
//     int mid = start + (end -start)/2;
//     mergeSort(arr,start,mid);
//     mergeSort(arr,mid+1,end);

//     merge(arr,start,end);
    
    
// }





int main(){
    int arr[] = {12,34,1,6,-3,-56,1,2,3,4,66,4,444,444,33,22,55,66,88};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;
    // mergeSort(arr,start,end);
    cout<<"after sorting array look like this \n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}