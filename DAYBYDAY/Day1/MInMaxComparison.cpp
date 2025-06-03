

// this is tournament method of finding min and max in an array
// this is a divide and conquer method

//there are many way means like sorting and use also different different methods to find min and max in an array
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
  pair<int,int> getMaxMin(vector<int> arr,int low, int high){
      pair<int,int> minmax,firstHalf,secondHalf;
      if(low==high){
          minmax.first = arr[low];
          minmax.second = arr[low];
          return minmax;
      }
      else if(low+1 ==high){
          if(arr[low]>arr[high]){
              minmax.first = arr[high];
              minmax.second = arr[low];
              return minmax;
          }
          else{
              minmax.first = arr[low];
              minmax.second = arr[high];
              return minmax;
              
          }
      }
      int mid = (low+high)/2;
      firstHalf = getMaxMin(arr,low,mid);
      secondHalf = getMaxMin(arr,mid+1,high);
      
      if(firstHalf.first>=secondHalf.first){
          minmax.first = secondHalf.first;
      }
      else{
          minmax.first = firstHalf.first;
      }
      if(firstHalf.second>=secondHalf.second){
          minmax.second = firstHalf.second;
      }
      else{
          minmax.second = secondHalf.second;
      }
      return minmax;
  }
    pair<int, int> getMinMax(vector<int> arr) {
        int length = arr.size();
        pair<int,int> finalAns = getMaxMin(arr,0,length-1);
        return finalAns;
        
        
        // code here
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
        pair<int, int> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends












// this is linear search method of finding min and max in an array

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
  pair<int,int> getMaxMin(vector<int> arr,int low, int high){
      pair<int,int> minmax,firstHalf,secondHalf;
      if(low==high){
          minmax.first = arr[low];
          minmax.second = arr[low];
          return minmax;
      }
      else if(low+1 ==high){
          if(arr[low]>arr[high]){
              minmax.first = arr[high];
              minmax.second = arr[low];
              return minmax;
          }
          else{
              minmax.first = arr[low];
              minmax.second = arr[high];
              return minmax;
              
          }
      }
      int mid = (low+high)/2;
      firstHalf = getMaxMin(arr,low,mid);
      secondHalf = getMaxMin(arr,mid+1,high);
      
      if(firstHalf.first>=secondHalf.first){
          minmax.first = secondHalf.first;
      }
      else{
          minmax.first = firstHalf.first;
      }
      if(firstHalf.second>=secondHalf.second){
          minmax.second = firstHalf.second;
      }
      else{
          minmax.second = secondHalf.second;
      }
      return minmax;
  }
    pair<int, int> getMinMax(vector<int> arr) {
        int length = arr.size();
        pair<int,int> finalAns = getMaxMin(arr,0,length-1);
        return finalAns;
        
        
        // code here
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
        pair<int, int> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends



