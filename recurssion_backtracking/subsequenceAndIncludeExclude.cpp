#include<iostream>
using namespace std;



// void subsequence(string input,string output,int index){
//     if (index>=input.length())
//     {
//         cout<<output<<" ";
//         return;
//     }
//     char ch = input[index];
//     subsequence(input,output,index+1);
//     output.push_back(ch);
//     subsequence(input,output,index+1);

    
// }

void subsequence(string input,string output,int index){
    if (index>=input.length())
    {
        cout<<"->"<<output<<endl;
        return;
    }
    char ch = input[index];
    output.push_back(ch);
    subsequence(input,output,index+1);
    output.pop_back();
    subsequence(input,output,index+1);

    
}


int main(){
    string input = "roshan";
    string output  = "";
    subsequence(input,output,0);

}
