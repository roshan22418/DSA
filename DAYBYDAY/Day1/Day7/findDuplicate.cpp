#include <iostream>
using namespace std;

#include<vector>

int DuplicateNumberUsingFastAnsSlowPointer(vector<int> &arr){
    int slow = arr[0];
    int fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
        cout<<"print "<<slow;
        cout<<" print fast "<<fast<<endl;
    } while (slow!=fast);
    // return 0 ;
    int pointer1 = arr[0];
    int pointer2 = arr[pointer1];
    while (pointer1!=pointer2)
    {
        
    }
    
    
}


int main(){
    int length;
    cin >> length;
    vector<int> arr(length);
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    int ans = DuplicateNumberUsingFastAnsSlowPointer(arr);
    return 0;
    
}