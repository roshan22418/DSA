#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int startPrice = prices[0];
            int FinalPRice = prices[0];
            int maxProfit = 0;
            int length = prices.size();
            if(length == 1){
                return 0;
            }
            for(int i = 0;i<length-1;i++){
                startPrice = prices[i];
    
                for(int j =i+1;j<length;j++){
                    FinalPRice = prices[j];
                    if(FinalPRice-startPrice>maxProfit){
                        maxProfit = FinalPRice - startPrice;
                    }              
                
                }            
    
            }
            return maxProfit;
    
            
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
        cout<<ob.maxProfit(arr)<<endl;
    }
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
// now we do efficient approach for this problem
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;


class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int mini = prices[0];
            int profit = 0;
            for(int i = 1;i<prices.size();i++){
                int cost = prices[i] - mini;
                profit = max(cost,profit);
                mini = min(mini,prices[i]);
    
            }
            return profit;
            
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
        cout<<ob.maxProfit(arr)<<endl;
    }
    return 0;
}
