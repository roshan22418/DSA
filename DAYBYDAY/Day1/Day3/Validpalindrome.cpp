#include <iostream>
using namespace std;
#include <string>


#include <sstream>
class Solution {
    public:
        bool isPalindrome(string s) {
            
            string snew = "";
            stringstream ss(s);
            string word;
            while(ss>>word){
                snew+=word;
            }
            
            for (int i = 0; i < snew.size(); i++) {
    
                if (snew[i] < 'A' || snew[i] > 'Z' && snew[i] < 'a'|| snew[i] > 'z') {
                    snew.erase(i, 1);
                    i--;
                    }
            }
            
            for (auto& x : snew) { 
                x = tolower(x); 
            } 
            cout<<snew<<endl;
            int length = snew.size();
            int length1  = length/2;
            bool ans = true;
            for (int i = 0;i<length;i++){
                if(i<length1){
                    if(snew[i] != snew[length-i-1]){
                    // cout<<snew[i]<<" and "<< i<<" "<<snew[length-i-1];
                    ans = false;
                    break;
                }
    
                }
                
            }
            return ans;       
            
        }
    };