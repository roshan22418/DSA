#include<iostream>
using namespace std;

void permutationOfstring(string &str,int index){
    if(index>=str.length()){
        cout<<str<<" ";
        return;
    }
    for (int j = index; j < str.length(); j++)
    {
        swap(str[index],str[j]);
        permutationOfstring(str,index+1);
        //backtracking because nullphy to change in back track
        swap(str[index],str[j]);
    }
    

}

int main(){
    string str = "abcdefgghiji";
    int index = 0;
    permutationOfstring(str,index);
    return 0;
}