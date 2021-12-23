#include <bits/stdc++.h>
using namespace std;

stack <char> stk1;
stack <int> stk;

char s[100];
char s1[100];

int main()
{
    int i, j, k = 0;;
    gets[s1];
    for(i = 0; s1[i] != '\0'; i++)
    {
        if(isdigit(s1[i]))
            s[k++] = s1[i];
        else if(s1[i] == ')')
        {
            while(1)
            {
                if(stk1.top == '(')
                    break;
                s[k++] = stk1.top();
                stk1.pop();
            }
        }
    }
}
