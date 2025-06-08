/*there are many way to do this problem
like first we create a currentStreamvvalue that is assign by 1 and index = 0 and 
we run the while loop till the target[index] and in operation i push and Pop operaton and then push after reaching that value a
and do this for alll element 
*/
#include<iostream>
using namespace std;
#include<vector>
#include<stack>



class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int i = 0;
        
        for (int num : target) {
            while (i < num - 1) {
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
            
            ans.push_back("Push");
            i++;
        }
        
        return ans;
    }
};



class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {


        // int ind=0;
        // vector<string>ans;
        // for(int i=1;i<=n && ind<tar.size();i++)
        // {
        //     ans.push_back("Push");
        //     if(tar[ind]!=i) ans.push_back("Pop");
        //     else ind++;
        // }
        // return ans;
        vector<string> operation;
        int targetSize = target.size();
        int indexT = 0;
        int stream = 1;
        stack<int> st;
        if(targetSize == 1){
            int value = target[0];
            if(value<=n){
                int totalPush = value;
                int totalPop = value-1;
                for(int i = 0;i<totalPush;i++){
                    operation.push_back("Push");
                    if(i< totalPush-1){
                        operation.push_back("Pop");
                    }
                }
                return operation;
            }
            else{
                return operation;
            }
            

        }
        while((indexT<targetSize ) && (stream <=n)){
            if(st.empty()){
                st.push(stream);
                operation.push_back("Push");
                stream++;
            }
            else{
                if(st.top() == target[indexT]){
                    if(indexT < targetSize-1){
                        st.push(stream);
                        operation.push_back("Push");
                        stream++;
                        indexT++;

                    }
                    else{
                        stream++;
                    }
                    
                }
                else{
                    st.pop();
                    operation.push_back("Pop");
                    st.push(stream);
                    stream++;
                    operation.push_back("Push");
                    
                }
            }
        }
        return operation;

        
    }
};