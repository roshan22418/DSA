/*
so in this problem we understand how custom comparater work and also unerstand how staic memeber useful when inside the funciton we create
a new fucntion call inside the within a class and also how static varaible declare
*/



#include<iostream>
using namespace std;

#include<string>


#include<algorithm>



class Solution {
public:
    static string str; 
    static bool compare(const char &a,const char &b){
        return str.find(a) < str.find(b); 
    }
    string customSortString(string order, string s) {
        // sort(s.begin(),s.end(),[order](const char a,const char b){
        //     return order.find(a)<order.find(b);
        // });
        str = order;
        sort(s.begin(),s.end(),Solution::compare);
        return s;
        
    }
};

string Solution::str = "";


