



#include<iostream>
using namespace std;
#include<cstring>

#include<algorithm>

// int helperOflength(char *ch){
//     char c = ch[0];
//     int  temp = (int)c;
//     int length = 0;
//     int index = 0;
//     while (temp != 0)
//     {
//         length++;
//         index++;
//         c = ch[index];
//         temp = int(c);
//     }
//     return length;
    
// }



int helperOflength(char *ch,int size){
    int length = 0;
    for(int i = 0;i<size;i++){
        if(ch[i] == '\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}


void upperCase(char ch[],int size){
    int index = 0;
    while (ch[index] != '\0')
    {
        if(ch[index]>='a' &&ch[index]<='z'){
            ch[index] = ch[index] -'a' +'A';
        }
        index++;
    }
    
}


int main(){
    char ch[100];
    // cin>> ch;                 //focus   but delimator is enter space tab new line 
    // cout<<ch;                      //focus   but delimator is enter space tab new line 
    cin.getline(ch,100);       // only delimator is new line
    int lengthOfchar = helperOflength(ch,100);
    // (ch);
    // cout<<lengthOfchar<<endl;
    cout<<"using build in fucniton to find the length "<<strlen(ch)<<endl;
    std::reverse(ch,ch+lengthOfchar);
    cout<<"reverse the array by using Tow pointer and also we reverse the array by using the built in funciton "<<ch<<endl;
    upperCase(ch,100);
    cout<<"Now this time to do all element in uppercase "<<ch<<endl;



}