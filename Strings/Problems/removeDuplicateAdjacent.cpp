



#include<iostream>
using namespace std;

#include<vector>

#include<string>







class Solution {
public:
    string removeDuplicates(string s) {



        string str = "";
        int size = s.size();
        for(int i = 0;i<size;i++){
            if(i==0){
                str.push_back(s[i]);
            }
            else if(!str.empty() && str.back()==s[i]){
                str.pop_back();
            }
            else{
                str.push_back(s[i]);
            }
        }
        return str;
        
        
        
        
        // int size = s.size();
        // string newstr = s;
        // for(int i = 1;i<newstr.size();i++){
        //     if(i>0 && newstr[i-1]==newstr[i]){
        //         newstr.erase(i-1,2);
        //         i = max(i-2,0);
        //     }
        // }
        // return newstr;

        
    }
};