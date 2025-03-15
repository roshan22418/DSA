// #problem statement: Given a string S delete the characters which are appearing more than once consecutively.
// #Example:
// #Input:
// #S = aabb
// #Output:  ab
// #Explanation: 'a' at 2nd position is
// #appearing 2nd time consecutively.
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



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



// Time complexity: O(n) where n is the length of the string.
// Space complexity: O(n) where n is the length of the string.
// Company Tags: Amazon, Microsoft, OYO Rooms, Paytm, Samsung, Snapdeal, Visa



#include <bits/stdc++.h>
using namespace std;
string removeConsecutiveCharacter(string s,string snew,int index) {
    if(index==s.size()){
        return snew;
    }
    if(s[index]==s[index-1]){
        return removeConsecutiveCharacter(s,snew,index+1);
    }
    else{
        snew+=s[index];
        return removeConsecutiveCharacter(s,snew,index+1);
    }   
    

}


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string snew = "";
        snew+=s[0];
        cout << removeConsecutiveCharacter(s,snew,1) << endl;

        cout << "~"
             << "\n";
    }
}   