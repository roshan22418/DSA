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

// Time Complexity: O(n)    
// Space Complexity: O(n)
// Input:
// 2
// 1 2 3 1
// 1 2 3 4
// Output:
// 1
// 0
// Explanation:
// Testcase 1: There is one duplicate element in the array, 1.
// Testcase 2: There is no duplicate element in the array.  
//


// there are many other way like sorting the array and then checking the adjacent elements if they are same or not
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

// other way is to use unordered_map
// Time Complexity: O(n)
// Space Complexity: O(n)
// unordered_map<int,int> m1;
// for(int i = 0;i<nums.size();i++){
//     m1[nums[i]]++;
// }
// for(auto x:m1){
//     if(x.second>1){
//         return true; 
//     }
// }
// return false;
// }
// };



// other way use bit manipulation
// Time Complexity: O(n)
// Space Complexity: O(1)
// int n = nums.size();
// int a = 0;
// for(int i = 0;i<n;i++){
//     a = a^nums[i];
// }
// return a;
// }
// };
