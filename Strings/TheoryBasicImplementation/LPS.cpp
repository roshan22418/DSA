#include<iostream>
using namespace std;

#include<vector>



vector<int> longestPrefixSuffix(string str){
    int length = str.length();
    vector<int> lsp(length,0);
    int prefix = 0;
    int suffix = 1;
    lsp[0] = 0;
    while (suffix<length)
    {
        if(str[suffix] == str[prefix]){
            lsp[suffix] = prefix+1;
            prefix++;
            suffix++;
        }
        else{
            if(prefix==0){
                suffix++;
            }
            else{
                prefix = lsp[suffix-1]-1;
                if(prefix==-1){
                    prefix=0;
                }
            }

            
                
        }
    }
    
    return lsp;

}







int main(){
    string str = "abcdgabcd";
    vector<int> LPS = longestPrefixSuffix(str);
    for(int i = 0;i<LPS.size();i++){
        cout<<LPS[i]<<" ";
    }
    return 0;
}