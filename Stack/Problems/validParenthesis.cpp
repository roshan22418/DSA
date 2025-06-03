#include <iostream>
#include <stack>
using namespace std;

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