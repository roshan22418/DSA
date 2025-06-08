#include <iostream>
#include <stack>
using namespace std;




class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int index = 0;
        int size1 = s.size();
        while(index<size1){
            if(st.empty()){
                if(s[index] == '(' || s[index] == '{' || s[index] == '['){
                    st.push(s[index]);
                    index ++;
                }
                else{
                    return false;     
                }
                           
            }
            else if(s[index] == '(' || s[index] == '{' || s[index] == '['){
                st.push(s[index]);
                index ++;
            }
            else{
                if((st.top() =='(' && s[index] ==')') || (st.top() =='{' && s[index] =='}') || (st.top() =='[' && s[index] ==']')){
                    st.pop();
                    index++;
                }
                else{
                    return false;
                }

            }
            
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }

        
    }
};

bool validParenthesis(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char temp = str[i];
        if (temp == '(' || temp == '{' || temp == '[')
        {
            st.push(temp);
        }
        else
        {
            if (st.size()==0)
            {
                return false;
            }
            else if (temp == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (temp == ']' && st.top() == '[')
            {
                st.pop();
            }
            else if (temp == '}' && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
            
        }
    }
    if (st.size()==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}

int main()
{
    string st = "({{[()]}})";
    bool ans = validParenthesis(st);
    cout<<ans<<endl;
    return 0;
}