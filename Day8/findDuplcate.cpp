#include <iostream>
using namespace std;

#include<vector>

int DuplicateNumberUsingFastAnsSlowPointer(vector<int> &arr){
    int ans  = 0;
    int length = arr.size();
    for (int i = 0; i < length; i++)
    {
        ans^=arr[i];
        ans^= (i+1);
    }
    return ans;
    
    
    
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
    printf("this is answer %d",ans);
    return 0;
    
}