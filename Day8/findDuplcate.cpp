#include <iostream>
using namespace std;

#include<vector>

int DuplicateNumberUsingXor(vector<int> &arr){
    int ans  = 0;
    int length = arr.size();
    for (int i = 0; i < length; i++)
    {
        ans^=arr[i];
        
    }
    for (int i = 1; i < length; i++)
    {
        ans^= i;        
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
    }
    int ans = DuplicateNumberUsingXor(arr);
    // cout<<ans<<endl;
    printf("this is answer %d",ans);
    return 0;
    
}