
#include <bits/stdc++.h>
using namespace std;

stack <int>st;
stack <char> st1;

char s[100];
char s1[100];

int main()
{
    int i, j = 0;
    gets(s1);
    st1.push('(');
    for(i = 0; s1[i] != '\0'; i++)
    {
        if(isdigit(s[i]))
            s[j++] = s1[i];
        else if(s[i] == ')')
        {
            while(1)
            {
                if(st1.top() == '(')
                    break;
                else s[j++] = st1.top();
                st1.pop();
            }
        }
        else if(s[i] == '+' || s[i] == '-')
        {
            if(st1.top() == '/' || st1.top() == '*' || st1.top() == '^')
            {
                s[j++] = st1.top();
                st1.pop();
            }
            st1.push(s[i]);
        }
        else st1.push(s[i]);
    }
    s[j] = '\0';
    puts(s);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '+')
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push((a+b));
        }
        else if(s[i] == '-')
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push((b-a));
        }
        else if(s[i] == '*')
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push((a*b));
        }
        else if(s[i] == '/')
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push((b/a));
        }
        else
        {
            int f = s[i] - '0';
            st.push(f);
        }
    }
    int x = st.top();
    printf("%d\n", x);

    return 0;
}
