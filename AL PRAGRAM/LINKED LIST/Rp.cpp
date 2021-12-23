#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    int i, j, k, flag = 0, r, l;
    cin>>s+2;
    s[0] = s[1] = '0';
    l = strlen(s);
    for(i = 0; i <l-2; i++)
    {
        if(flag)
            break;
        for(j = i+1; j<l-1; j++)
        {
            if(flag)
                break;
            for(k = j+1; k <l; k++)
            {
                r = (s[i]-'0')*100 + (s[j] - '0')*10 + (s[k] - '0');
                if(r%8 == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }
    if(flag)
    {
        printf("YES\n%d\n", r);
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
