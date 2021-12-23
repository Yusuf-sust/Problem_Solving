#include <bits/stdc++.h>
using namespace std;

stack <int>st;

char s[100];

int main()
{
    int i, j;
    gets(s);
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
