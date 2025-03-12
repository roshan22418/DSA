#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            set<int> s1;
            for(int i = 0;i<nums.size();i++){
                s1.insert(nums[i]);
            }
            if(nums.size()!=s1.size()){
                return true;
            }
            else{
                return false;
            }
            
        }
    };

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
        cout<<ob.containsDuplicate(arr)<<endl;
    }
    return 0;
}