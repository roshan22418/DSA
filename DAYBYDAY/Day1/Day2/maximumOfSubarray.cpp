#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
class Solution {
  public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int length = nums.size();
        for(int i = 0;i<length;i++){
            int SubarraySum = 0;
            for(int j = i;j<length;j++){
                SubarraySum+=nums[j];
                if(SubarraySum>sum){
                    sum = SubarraySum;
                }
            }
        }
        return sum;        
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
        cout<<ob.maxSubArray(arr)<<endl;
    }
    return 0;
}
// Time Complexity: O(n^2)
// Space Complexity: O(1)


//now we do efficient approach for this problem
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int maxSum = nums[0];
            int max1 = nums[0];
            int length = nums.size();
            for(int i = 1;i<length;i++){
                if(max1<0){
                    max1 = 0;
                }
                max1 +=nums[i];
                maxSum = max(max1,maxSum);
                
            }
            return maxSum;
            
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
        cout<<ob.maxSubArray(arr)<<endl;
    }
    return 0;
}