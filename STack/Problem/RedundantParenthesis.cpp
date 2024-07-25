#include <iostream>
#include <stack>
using namespace std;

bool redundantParenthesis(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '+' || ch == '-' || ch == '(' || ch == '*' || ch == '/' || ch == '%')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            if (!st.empty())
            {
                int operator1 = 0;
                while (st.top() != '(')
                {
                    if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/' || st.top() == '%')
                    {
                        operator1++;
                    }
                    st.pop();
                }
                st.pop();
                if (operator1 == 0)
                {
                    return true;
                }
            }
            else
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string str = "((a+b)*d)";

    bool ans = redundantParenthesis(str);
    cout << ans << endl;
}