// There are many way to do this problem. One of the way is to use recursion. Here is the code for the same:
// Navie approach 
// using two Pointer 
// swapping the element at low and high index
// using inbuild reverse function
// using recursion
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void ReverseUsingRecursion(vector<int> &arr,int low,int high){
        if(low>=high){
            return ;
        }
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low+=1;
        high -=1;
        ReverseUsingRecursion(arr,low,high);
        
    }
    void reverseArray(vector<int> &arr) {
        int length = arr.size();
        ReverseUsingRecursion(arr,0,length-1);
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends