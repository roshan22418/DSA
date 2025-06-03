// #problem statement: Write a function to find the longest common prefix string amongst an array of strings.
// #If there is no common prefix, return an empty string "". You may assume all strings in the given array are non-empty strings.


#include <iostream>
using namespace std;
#include <vector>
#include <string>


class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string snew = strs[0];
            int lengthArray = strs.size();
            int length = snew.size();
            for(int i =1;i<lengthArray;i++){
                int index = 0;
                string snew1 = strs[i];
                while(index<length){
                    if(snew[index]==snew1[index]){
                        index+=1;
                    }
                    else{
                        length=index;
                        break;
                    }
                }            
            }
            string Ans = "";
            for(int i = 0;i<length;i++){
                Ans += snew[i];
            }
            return Ans;
            
            
        }
    };



int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        string ans;
        Solution ob;
        ans = ob.longestCommonPrefix(arr);
        cout << ans << endl;
    }
    return 0;
}




// time complexity: O(n*m) where n is the number of strings and m is the length of the longest string.
// space complexity: O(1)

