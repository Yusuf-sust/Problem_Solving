#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100], ch;
    int j, a[50], maxi = -1000;
    map <char,int>m;
    gets(s);
    ch = s[0];
    for(j = 0; s[j] != '\0'; j++)
    {
        m[s[j]]++;
        if(m[s[j]] > maxi)
        {
            maxi = m[s[j]];
            ch = s[j];
        }
    }
    printf("%c\n", ch);

    return 0;
}

