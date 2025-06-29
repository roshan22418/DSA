/*
so in this problem we find all the validrome in substring 
Greddy approach=> in our mind first think about the find all substring and then find total number is valid palindrome s


so another approach is so first create a Two pointer for every index and find out that poistion all possible 
validpalindrome -> also have two case one for odd length of validpalindrome one for the even lenth of validpalidnromee v
*/


#include<iostream>
using namespace std;
#include<string>



class Solution {
public:
    int totalValidPlaindrome(string s,int pos1,int pos2){
        int i = pos1;
        int j = pos2;
        int count = 0;
        int length = s.size();
        while(i>=0 && j<length && s[i]==s[j]){
            i--;
            j++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalPlaindrom = 0;
        for(int i = 0;i<s.size();i++){
            int opt1Odd = totalValidPlaindrome(s,i,i);    //both position at same place 
            cout<<opt1Odd<<endl;
            int opt2Even = totalValidPlaindrome(s,i,i+1);   // one is ith and another is ith+1
            totalPlaindrom = totalPlaindrom + opt1Odd + opt2Even; 

        }
        
        return totalPlaindrom;
    }
};
