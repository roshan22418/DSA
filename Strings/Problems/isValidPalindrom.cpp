/*
this problem is good for the edge case and also wrong logical error so 
this see below code*/


#include<iostream>
using namespace std;
#include<string>



class Solution {
public:
    bool isValidAfterDelete(string s,int i,int j){
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() -1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                bool opt1 = isValidAfterDelete(s,i+1,j);   // first delete
                bool opt2 = isValidAfterDelete(s,i,j-1);
                if(opt1 || opt2){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return true;




        //below logic is wrong for many cases
        // example "eccer" our code give false but in real is true;
        // int i = 0;
        // int j = s.size() -1;
        // bool isAtmostOneDelte = false;
        // while(i<=j){
        //     if(s[i] == s[j]){
        //         i++;j--;
        //     }
        //     else{
        //         if(isAtmostOneDelte==false){
        //             if(i+1<s.size()&&s[i]==s[i+1]){
        //                 // s.erase(j,1);
        //                 j--;
        //             }
        //             else{
        //                 // s.erase(i,1);
        //                 // cout<<s<<endl;
        //                 // cout<<"initial i value "<<i<<endl;
        //                 i++;
        //             }
        //             isAtmostOneDelte = true;

        //         }
        //         else{
        //             return false;
        //         }
                
        //     }
        // }
        // return true;
        
    }
};