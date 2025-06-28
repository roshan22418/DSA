





#include<iostream>
using namespace std;


#include<cstring>

#include<algorithm>







bool isValidPalindrome(char ch[],int size){
    int i = 0;
    int j = size -1;
    while (i<=j)
    {
        if(ch[i]!=ch[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    
}












int main(){
    char ch[100];
    cin>>ch;
    int length = strlen(ch);
    bool palindromeOrnot = isValidPalindrome(ch,length);
    if(palindromeOrnot){
        cout<<"moj karo bhai validrome hai"<<endl;
    }
    else{
        cout<<"this is not valid palindrome "<<endl;
    }
    return 0;
}