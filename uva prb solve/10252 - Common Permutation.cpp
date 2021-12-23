#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000], a[10000], b[10000];
    int i, j, k;
    while(gets(a))
    {
        gets(b);
        k = 0;
        for(i = 0; a[i] != '\0'; i++)
        {
            for(j = 0; b[j] != '\0'; j++)
            {
                if(a[i] == b[j])
                {
                    s[k++] = a[i];
                    b[j] = '.';
                    break;
                }
            }
        }
        sort(s, s+k);
        s[k] = '\0';
        cout<<s<<endl;
    }

    return 0;
}
