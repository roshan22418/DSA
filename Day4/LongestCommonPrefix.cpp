#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string>& arr) {
        int n = arr.size();
        if (n == 0) {
            return "";
        }
        string prefix = arr[0];
        for (int i = 1; i < n; i++) {
            string s = arr[i];
            int j = 0;
            while (j < prefix.size() && j < s.size() && prefix[j] == s[j]) {
                j++;
            }
            prefix = prefix.substr(0, j);
        }
        return prefix;
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
        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
    return 0;
}