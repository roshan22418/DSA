
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        string snew = "";
        snew +=s[0];
        int length1 = s.size();
        for(int i = 1;i<length1;i++){
            if(s[i-1]==s[i]){
                continue;
            }
            else{
                snew+=s[i];
            }
            
        }
        return snew;
        // code here.
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsecutiveCharacter(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends